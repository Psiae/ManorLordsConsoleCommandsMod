enum class EBuiltInDoubleCameraVariable {
    None = 0,
    Yaw = 1,
    Pitch = 2,
    Roll = 3,
    Zoom = 4,
    EBuiltInDoubleCameraVariable_MAX = 5,
};

enum class EBuiltInRotator3dCameraVariable {
    None = 0,
    ControlRotation = 1,
    EBuiltInRotator3dCameraVariable_MAX = 2,
};

enum class EBuiltInVector2dCameraVariable {
    None = 0,
    YawPitch = 1,
    EBuiltInVector2dCameraVariable_MAX = 2,
};

enum class ECameraAutoRotateDirection {
    Facing = 0,
    Movement = 1,
    ECameraAutoRotateDirection_MAX = 2,
};

enum class ECameraBlendStackType {
    IsolatedTransient = 0,
    AdditivePersistent = 1,
    ECameraBlendStackType_MAX = 2,
};

enum class ECameraBuildStatus {
    Clean = 0,
    CleanWithWarnings = 1,
    WithErrors = 2,
    Dirty = 3,
    ECameraBuildStatus_MAX = 4,
};

enum class ECameraNodeOriginPosition {
    CameraPose = 0,
    ActiveContext = 1,
    OwningContext = 2,
    Pivot = 3,
    Pawn = 4,
    ECameraNodeOriginPosition_MAX = 5,
};

enum class ECameraNodeSpace {
    CameraPose = 0,
    ActiveContext = 1,
    OwningContext = 2,
    Pivot = 3,
    Pawn = 4,
    World = 5,
    ECameraNodeSpace_MAX = 6,
};

enum class ECameraRigInitialOrientation {
    None = 0,
    ContextYawPitch = 1,
    PreviousYawPitch = 2,
    PreviousAbsoluteTarget = 3,
    PreviousRelativeTarget = 4,
    ECameraRigInitialOrientation_MAX = 5,
};

enum class ECameraRigLayer {
    Base = 0,
    Main = 1,
    Global = 2,
    Visual = 3,
    ECameraRigLayer_MAX = 4,
};

enum class ECameraVariableType {
    Boolean = 0,
    Integer32 = 1,
    Float = 2,
    Double = 3,
    Vector2f = 4,
    Vector2d = 5,
    Vector3f = 6,
    Vector3d = 7,
    Vector4f = 8,
    Vector4d = 9,
    Rotator3f = 10,
    Rotator3d = 11,
    Transform3f = 12,
    Transform3d = 13,
    ECameraVariableType_MAX = 14,
};

enum class ECollisionSafePosition {
    ActiveContext = 0,
    OwningContext = 1,
    Pivot = 2,
    Pawn = 3,
    ECollisionSafePosition_MAX = 4,
};

enum class ECollisionSafePositionOffsetSpace {
    ActiveContext = 0,
    OwningContext = 1,
    Pivot = 2,
    CameraPose = 3,
    Pawn = 4,
    ECollisionSafePositionOffsetSpace_MAX = 5,
};

enum class ESmoothCameraBlendType {
    SmoothStep = 0,
    SmootherStep = 1,
    ESmoothCameraBlendType_MAX = 2,
};

