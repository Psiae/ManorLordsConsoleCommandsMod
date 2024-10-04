#ifndef UE4SS_SDK_InterchangeImport_HPP
#define UE4SS_SDK_InterchangeImport_HPP

#include "InterchangeImport_enums.hpp"

class IInterchangeAnimationPayloadInterface : public IInterface
{
}; // Size: 0x28

class IInterchangeBlockedTexturePayloadInterface : public IInterface
{
}; // Size: 0x28

class IInterchangeMeshPayloadInterface : public IInterface
{
}; // Size: 0x28

class IInterchangeSlicedTexturePayloadInterface : public IInterface
{
}; // Size: 0x28

class IInterchangeTextureLightProfilePayloadInterface : public IInterface
{
}; // Size: 0x28

class IInterchangeTexturePayloadInterface : public IInterface
{
}; // Size: 0x28

class IInterchangeVariantSetPayloadInterface : public IInterface
{
}; // Size: 0x28

class UInterchangeActorFactory : public UInterchangeFactoryBase
{
}; // Size: 0x30

class UInterchangeAnimSequenceFactory : public UInterchangeFactoryBase
{
}; // Size: 0x138

class UInterchangeCameraActorFactory : public UInterchangeActorFactory
{
}; // Size: 0x30

class UInterchangeCineCameraActorFactory : public UInterchangeActorFactory
{
}; // Size: 0x30

class UInterchangeDDSTranslator : public UInterchangeTranslatorBase
{
}; // Size: 0x48

class UInterchangeDecalActorFactory : public UInterchangeActorFactory
{
}; // Size: 0x30

class UInterchangeFbxTranslator : public UInterchangeTranslatorBase
{
}; // Size: 0x78

class UInterchangeFbxTranslatorSettings : public UInterchangeTranslatorSettings
{
    bool bConvertScene;                                                               // 0x0028 (size: 0x1)
    bool bForceFrontXAxis;                                                            // 0x0029 (size: 0x1)
    bool bConvertSceneUnit;                                                           // 0x002A (size: 0x1)

}; // Size: 0x30

class UInterchangeGLTFTranslator : public UInterchangeTranslatorBase
{
}; // Size: 0x290

class UInterchangeIESTranslator : public UInterchangeTranslatorBase
{
}; // Size: 0x40

class UInterchangeImageWrapperTranslator : public UInterchangeTranslatorBase
{
}; // Size: 0x48

class UInterchangeJPGTranslator : public UInterchangeTranslatorBase
{
}; // Size: 0x40

class UInterchangeLevelSequenceFactory : public UInterchangeFactoryBase
{
}; // Size: 0x38

class UInterchangeLightActorFactory : public UInterchangeActorFactory
{
}; // Size: 0x30

class UInterchangeMaterialFactory : public UInterchangeFactoryBase
{
}; // Size: 0x38

class UInterchangeMaterialFunctionFactory : public UInterchangeFactoryBase
{
}; // Size: 0x38

class UInterchangeMaterialXTranslator : public UInterchangeTranslatorBase
{
}; // Size: 0x40

class UInterchangeOBJTranslator : public UInterchangeTranslatorBase
{
}; // Size: 0x50

class UInterchangePCXTranslator : public UInterchangeTranslatorBase
{
}; // Size: 0x40

class UInterchangePSDTranslator : public UInterchangeTranslatorBase
{
}; // Size: 0x40

class UInterchangePhysicsAssetFactory : public UInterchangeFactoryBase
{
}; // Size: 0x30

class UInterchangeSceneImportAssetFactory : public UInterchangeFactoryBase
{
}; // Size: 0x30

class UInterchangeSceneVariantSetsFactory : public UInterchangeFactoryBase
{
}; // Size: 0x38

class UInterchangeSkeletalMeshActorFactory : public UInterchangeActorFactory
{
}; // Size: 0x30

class UInterchangeSkeletalMeshFactory : public UInterchangeFactoryBase
{
}; // Size: 0x80

class UInterchangeSkeletonFactory : public UInterchangeFactoryBase
{
}; // Size: 0x30

class UInterchangeStaticMeshActorFactory : public UInterchangeActorFactory
{
}; // Size: 0x30

class UInterchangeStaticMeshFactory : public UInterchangeFactoryBase
{
}; // Size: 0x48

class UInterchangeTextureFactory : public UInterchangeFactoryBase
{
}; // Size: 0xC0

class UInterchangeUEJPEGTranslator : public UInterchangeTranslatorBase
{
}; // Size: 0x40

class UMaterialExpressionMaterialXAppend3Vector : public UMaterialExpression
{
    FExpressionInput A;                                                               // 0x00B0 (size: 0x28)
    FExpressionInput B;                                                               // 0x00D8 (size: 0x28)
    FExpressionInput C;                                                               // 0x0100 (size: 0x28)

}; // Size: 0x128

class UMaterialExpressionMaterialXAppend4Vector : public UMaterialExpression
{
    FExpressionInput A;                                                               // 0x00B0 (size: 0x28)
    FExpressionInput B;                                                               // 0x00D8 (size: 0x28)
    FExpressionInput C;                                                               // 0x0100 (size: 0x28)
    FExpressionInput D;                                                               // 0x0128 (size: 0x28)

}; // Size: 0x150

class UMaterialExpressionMaterialXBurn : public UMaterialExpression
{
    FExpressionInput A;                                                               // 0x00B0 (size: 0x28)
    FExpressionInput B;                                                               // 0x00D8 (size: 0x28)
    FExpressionInput Alpha;                                                           // 0x0100 (size: 0x28)
    float ConstAlpha;                                                                 // 0x0128 (size: 0x4)

}; // Size: 0x130

class UMaterialExpressionMaterialXDifference : public UMaterialExpression
{
    FExpressionInput A;                                                               // 0x00B0 (size: 0x28)
    FExpressionInput B;                                                               // 0x00D8 (size: 0x28)
    FExpressionInput Alpha;                                                           // 0x0100 (size: 0x28)
    float ConstAlpha;                                                                 // 0x0128 (size: 0x4)

}; // Size: 0x130

class UMaterialExpressionMaterialXDisjointOver : public UMaterialExpression
{
    FExpressionInput A;                                                               // 0x00B0 (size: 0x28)
    FExpressionInput B;                                                               // 0x00D8 (size: 0x28)
    FExpressionInput Alpha;                                                           // 0x0100 (size: 0x28)
    float ConstAlpha;                                                                 // 0x0128 (size: 0x4)

}; // Size: 0x130

class UMaterialExpressionMaterialXDodge : public UMaterialExpression
{
    FExpressionInput A;                                                               // 0x00B0 (size: 0x28)
    FExpressionInput B;                                                               // 0x00D8 (size: 0x28)
    FExpressionInput Alpha;                                                           // 0x0100 (size: 0x28)
    float ConstAlpha;                                                                 // 0x0128 (size: 0x4)

}; // Size: 0x130

class UMaterialExpressionMaterialXFractal3D : public UMaterialExpression
{
    FExpressionInput Position;                                                        // 0x00B0 (size: 0x28)
    FExpressionInput Amplitude;                                                       // 0x00D8 (size: 0x28)
    float ConstAmplitude;                                                             // 0x0100 (size: 0x4)
    FExpressionInput Octaves;                                                         // 0x0108 (size: 0x28)
    int32 ConstOctaves;                                                               // 0x0130 (size: 0x4)
    FExpressionInput Lacunarity;                                                      // 0x0138 (size: 0x28)
    float ConstLacunarity;                                                            // 0x0160 (size: 0x4)
    FExpressionInput Diminish;                                                        // 0x0168 (size: 0x28)
    float ConstDiminish;                                                              // 0x0190 (size: 0x4)
    float Scale;                                                                      // 0x0194 (size: 0x4)
    bool bTurbulence;                                                                 // 0x0198 (size: 0x1)
    int32 Levels;                                                                     // 0x019C (size: 0x4)
    float OutputMin;                                                                  // 0x01A0 (size: 0x4)
    float OutputMax;                                                                  // 0x01A4 (size: 0x4)

}; // Size: 0x1A8

class UMaterialExpressionMaterialXIn : public UMaterialExpression
{
    FExpressionInput A;                                                               // 0x00B0 (size: 0x28)
    FExpressionInput B;                                                               // 0x00D8 (size: 0x28)
    FExpressionInput Alpha;                                                           // 0x0100 (size: 0x28)
    float ConstAlpha;                                                                 // 0x0128 (size: 0x4)

}; // Size: 0x130

class UMaterialExpressionMaterialXLuminance : public UMaterialExpression
{
    FExpressionInput Input;                                                           // 0x00B0 (size: 0x28)
    FLinearColor LuminanceFactors;                                                    // 0x00D8 (size: 0x10)
    EMaterialXLuminanceMode LuminanceMode;                                            // 0x00E8 (size: 0x1)

}; // Size: 0xF0

class UMaterialExpressionMaterialXMask : public UMaterialExpression
{
    FExpressionInput A;                                                               // 0x00B0 (size: 0x28)
    FExpressionInput B;                                                               // 0x00D8 (size: 0x28)
    FExpressionInput Alpha;                                                           // 0x0100 (size: 0x28)
    float ConstAlpha;                                                                 // 0x0128 (size: 0x4)

}; // Size: 0x130

class UMaterialExpressionMaterialXMatte : public UMaterialExpression
{
    FExpressionInput A;                                                               // 0x00B0 (size: 0x28)
    FExpressionInput B;                                                               // 0x00D8 (size: 0x28)
    FExpressionInput Alpha;                                                           // 0x0100 (size: 0x28)
    float ConstAlpha;                                                                 // 0x0128 (size: 0x4)

}; // Size: 0x130

class UMaterialExpressionMaterialXMinus : public UMaterialExpression
{
    FExpressionInput A;                                                               // 0x00B0 (size: 0x28)
    FExpressionInput B;                                                               // 0x00D8 (size: 0x28)
    FExpressionInput Alpha;                                                           // 0x0100 (size: 0x28)
    float ConstAlpha;                                                                 // 0x0128 (size: 0x4)

}; // Size: 0x130

class UMaterialExpressionMaterialXOut : public UMaterialExpression
{
    FExpressionInput A;                                                               // 0x00B0 (size: 0x28)
    FExpressionInput B;                                                               // 0x00D8 (size: 0x28)
    FExpressionInput Alpha;                                                           // 0x0100 (size: 0x28)
    float ConstAlpha;                                                                 // 0x0128 (size: 0x4)

}; // Size: 0x130

class UMaterialExpressionMaterialXOver : public UMaterialExpression
{
    FExpressionInput A;                                                               // 0x00B0 (size: 0x28)
    FExpressionInput B;                                                               // 0x00D8 (size: 0x28)
    FExpressionInput Alpha;                                                           // 0x0100 (size: 0x28)
    float ConstAlpha;                                                                 // 0x0128 (size: 0x4)

}; // Size: 0x130

class UMaterialExpressionMaterialXOverlay : public UMaterialExpression
{
    FExpressionInput A;                                                               // 0x00B0 (size: 0x28)
    FExpressionInput B;                                                               // 0x00D8 (size: 0x28)
    FExpressionInput Alpha;                                                           // 0x0100 (size: 0x28)
    float ConstAlpha;                                                                 // 0x0128 (size: 0x4)

}; // Size: 0x130

class UMaterialExpressionMaterialXPlace2D : public UMaterialExpression
{
    FExpressionInput Coordinates;                                                     // 0x00B0 (size: 0x28)
    FExpressionInput Pivot;                                                           // 0x00D8 (size: 0x28)
    FExpressionInput Scale;                                                           // 0x0100 (size: 0x28)
    FExpressionInput Offset;                                                          // 0x0128 (size: 0x28)
    FExpressionInput RotationAngle;                                                   // 0x0150 (size: 0x28)
    float ConstRotationAngle;                                                         // 0x0178 (size: 0x4)
    uint8 ConstCoordinate;                                                            // 0x017C (size: 0x1)

}; // Size: 0x180

class UMaterialExpressionMaterialXPlus : public UMaterialExpression
{
    FExpressionInput A;                                                               // 0x00B0 (size: 0x28)
    FExpressionInput B;                                                               // 0x00D8 (size: 0x28)
    FExpressionInput Alpha;                                                           // 0x0100 (size: 0x28)
    float ConstAlpha;                                                                 // 0x0128 (size: 0x4)

}; // Size: 0x130

class UMaterialExpressionMaterialXPremult : public UMaterialExpression
{
    FExpressionInput Input;                                                           // 0x00B0 (size: 0x28)

}; // Size: 0xD8

class UMaterialExpressionMaterialXRamp4 : public UMaterialExpression
{
    FExpressionInput Coordinates;                                                     // 0x00B0 (size: 0x28)
    FExpressionInput A;                                                               // 0x00D8 (size: 0x28)
    FExpressionInput B;                                                               // 0x0100 (size: 0x28)
    FExpressionInput C;                                                               // 0x0128 (size: 0x28)
    FExpressionInput D;                                                               // 0x0150 (size: 0x28)
    uint8 ConstCoordinate;                                                            // 0x0178 (size: 0x1)

}; // Size: 0x180

class UMaterialExpressionMaterialXRampLeftRight : public UMaterialExpression
{
    FExpressionInput Coordinates;                                                     // 0x00B0 (size: 0x28)
    FExpressionInput A;                                                               // 0x00D8 (size: 0x28)
    FExpressionInput B;                                                               // 0x0100 (size: 0x28)
    uint8 ConstCoordinate;                                                            // 0x0128 (size: 0x1)

}; // Size: 0x130

class UMaterialExpressionMaterialXRampTopBottom : public UMaterialExpression
{
    FExpressionInput Coordinates;                                                     // 0x00B0 (size: 0x28)
    FExpressionInput A;                                                               // 0x00D8 (size: 0x28)
    FExpressionInput B;                                                               // 0x0100 (size: 0x28)
    uint8 ConstCoordinate;                                                            // 0x0128 (size: 0x1)

}; // Size: 0x130

class UMaterialExpressionMaterialXRemap : public UMaterialExpression
{
    FExpressionInput Input;                                                           // 0x00B0 (size: 0x28)
    FExpressionInput InputLow;                                                        // 0x00D8 (size: 0x28)
    FExpressionInput InputHigh;                                                       // 0x0100 (size: 0x28)
    FExpressionInput TargetLow;                                                       // 0x0128 (size: 0x28)
    FExpressionInput TargetHigh;                                                      // 0x0150 (size: 0x28)
    float InputLowDefault;                                                            // 0x0178 (size: 0x4)
    float InputHighDefault;                                                           // 0x017C (size: 0x4)
    float TargetLowDefault;                                                           // 0x0180 (size: 0x4)
    float TargetHighDefault;                                                          // 0x0184 (size: 0x4)

}; // Size: 0x188

class UMaterialExpressionMaterialXRotate2D : public UMaterialExpression
{
    FExpressionInput Input;                                                           // 0x00B0 (size: 0x28)
    FExpressionInput RotationAngle;                                                   // 0x00D8 (size: 0x28)
    float ConstRotationAngle;                                                         // 0x0100 (size: 0x4)

}; // Size: 0x108

class UMaterialExpressionMaterialXScreen : public UMaterialExpression
{
    FExpressionInput A;                                                               // 0x00B0 (size: 0x28)
    FExpressionInput B;                                                               // 0x00D8 (size: 0x28)
    FExpressionInput Alpha;                                                           // 0x0100 (size: 0x28)
    float ConstAlpha;                                                                 // 0x0128 (size: 0x4)

}; // Size: 0x130

class UMaterialExpressionMaterialXSplitLeftRight : public UMaterialExpression
{
    FExpressionInput Coordinates;                                                     // 0x00B0 (size: 0x28)
    FExpressionInput A;                                                               // 0x00D8 (size: 0x28)
    FExpressionInput B;                                                               // 0x0100 (size: 0x28)
    FExpressionInput Center;                                                          // 0x0128 (size: 0x28)
    float ConstCenter;                                                                // 0x0150 (size: 0x4)
    uint8 ConstCoordinate;                                                            // 0x0154 (size: 0x1)

}; // Size: 0x158

class UMaterialExpressionMaterialXSplitTopBottom : public UMaterialExpression
{
    FExpressionInput Coordinates;                                                     // 0x00B0 (size: 0x28)
    FExpressionInput A;                                                               // 0x00D8 (size: 0x28)
    FExpressionInput B;                                                               // 0x0100 (size: 0x28)
    FExpressionInput Center;                                                          // 0x0128 (size: 0x28)
    float ConstCenter;                                                                // 0x0150 (size: 0x4)
    uint8 ConstCoordinate;                                                            // 0x0154 (size: 0x1)

}; // Size: 0x158

class UMaterialExpressionMaterialXSwizzle : public UMaterialExpression
{
    FExpressionInput Input;                                                           // 0x00B0 (size: 0x28)
    FString Channels;                                                                 // 0x00D8 (size: 0x10)

}; // Size: 0xE8

class UMaterialExpressionMaterialXTextureSampleParameterBlur : public UMaterialExpressionTextureSampleParameter2D
{
    EMAterialXTextureSampleBlurKernel KernelSize;                                     // 0x0220 (size: 0x4)
    float FilterSize;                                                                 // 0x0224 (size: 0x4)
    float FilterOffset;                                                               // 0x0228 (size: 0x4)
    EMaterialXTextureSampleBlurFilter Filter;                                         // 0x022C (size: 0x1)

}; // Size: 0x230

class UMaterialExpressionMaterialXUnpremult : public UMaterialExpression
{
    FExpressionInput Input;                                                           // 0x00B0 (size: 0x28)

}; // Size: 0xD8

#endif
