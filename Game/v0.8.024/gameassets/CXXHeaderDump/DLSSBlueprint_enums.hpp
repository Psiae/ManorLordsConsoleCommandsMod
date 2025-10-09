enum class UDLSSMode {
    Off = 0,
    Auto = 1,
    DLAA = 2,
    UltraQuality = 3,
    Quality = 4,
    Balanced = 5,
    Performance = 6,
    UltraPerformance = 7,
    UDLSSMode_MAX = 8,
};

enum class UDLSSSupport {
    Supported = 0,
    NotSupported = 1,
    NotSupportedIncompatibleHardware = 2,
    NotSupportedDriverOutOfDate = 3,
    NotSupportedOperatingSystemOutOfDate = 4,
    NotSupportedByPlatformAtBuildTime = 5,
    NotSupportedIncompatibleAPICaptureToolActive = 6,
    UDLSSSupport_MAX = 7,
};

