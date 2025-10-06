enum class EAudioColorGradient {
    BlackToWhite = 0,
    WhiteToBlack = 1,
    EAudioColorGradient_MAX = 2,
};

enum class EAudioMaterialEnvelopeType {
    AD = 0,
    ADSR = 1,
    EAudioMaterialEnvelopeType_MAX = 2,
};

enum class EAudioOscilloscopeTriggerMode {
    None = 0,
    Rising = 1,
    Falling = 2,
    EAudioOscilloscopeTriggerMode_MAX = 3,
};

enum class EAudioPanelLayoutType {
    Basic = 0,
    Advanced = 1,
    EAudioPanelLayoutType_MAX = 2,
};

enum EAudioRadialSliderLayout {
    Layout_LabelTop = 0,
    Layout_LabelCenter = 1,
    Layout_LabelBottom = 2,
    Layout_MAX = 3,
};

enum class EAudioSpectrogramFrequencyAxisPixelBucketMode {
    Sample = 0,
    Peak = 1,
    Average = 2,
    EAudioSpectrogramFrequencyAxisPixelBucketMode_MAX = 3,
};

enum class EAudioSpectrogramFrequencyAxisScale {
    Linear = 0,
    Logarithmic = 1,
    EAudioSpectrogramFrequencyAxisScale_MAX = 2,
};

enum class EAudioSpectrumAnalyzerBallistics {
    Analog = 0,
    Digital = 1,
    EAudioSpectrumAnalyzerBallistics_MAX = 2,
};

enum class EAudioSpectrumAnalyzerType {
    FFT = 0,
    CQT = 1,
    EAudioSpectrumAnalyzerType_MAX = 2,
};

enum class EAudioSpectrumPlotFrequencyAxisPixelBucketMode {
    Sample = 0,
    Peak = 1,
    Average = 2,
    EAudioSpectrumPlotFrequencyAxisPixelBucketMode_MAX = 3,
};

enum class EAudioSpectrumPlotFrequencyAxisScale {
    Linear = 0,
    Logarithmic = 1,
    EAudioSpectrumPlotFrequencyAxisScale_MAX = 2,
};

enum class EAudioSpectrumPlotTilt {
    NoTilt = 0,
    Plus1_5dBPerOctave = 1,
    Plus3dBPerOctave = 2,
    Plus4_5dBPerOctave = 3,
    Plus6dBPerOctave = 4,
    EAudioSpectrumPlotTilt_MAX = 5,
};

enum class EAudioUnitsValueType {
    Linear = 0,
    Frequency = 1,
    Volume = 2,
    EAudioUnitsValueType_MAX = 3,
};

enum class EXAxisLabelsUnit {
    Samples = 0,
    Seconds = 1,
    EXAxisLabelsUnit_MAX = 2,
};

enum class EYAxisLabelsUnit {
    Linear = 0,
    Db = 1,
    EYAxisLabelsUnit_MAX = 2,
};

