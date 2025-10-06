namespace EMassLOD {
    enum Type {
        High = 0,
        Medium = 1,
        Low = 2,
        Off = 3,
        Max = 4,
    };
}

enum class EMassVisibility {
    CanBeSeen = 0,
    CulledByFrustum = 1,
    CulledByDistance = 2,
    Max = 3,
};

