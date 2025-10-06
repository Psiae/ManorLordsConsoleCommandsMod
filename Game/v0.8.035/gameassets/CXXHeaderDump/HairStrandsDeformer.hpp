#ifndef UE4SS_SDK_HairStrandsDeformer_HPP
#define UE4SS_SDK_HairStrandsDeformer_HPP

#include "HairStrandsDeformer_enums.hpp"

class UOptimusGroomComponentSource : public UOptimusComponentSource
{
}; // Size: 0x28

class UOptimusGroomDataInterface : public UOptimusComputeDataInterface
{
}; // Size: 0x28

class UOptimusGroomDataProvider : public UComputeDataProvider
{
    class UGroomComponent* Groom;                                                     // 0x0028 (size: 0x8)

}; // Size: 0x30

class UOptimusGroomExecDataInterface : public UOptimusComputeDataInterface
{
    EOptimusGroomExecDomain Domain;                                                   // 0x0030 (size: 0x1)

}; // Size: 0x38

class UOptimusGroomExecDataProvider : public UComputeDataProvider
{
    class UGroomComponent* GroomComponent;                                            // 0x0028 (size: 0x8)
    EOptimusGroomExecDomain Domain;                                                   // 0x0030 (size: 0x1)

}; // Size: 0x38

class UOptimusGroomGuideDataInterface : public UOptimusComputeDataInterface
{
}; // Size: 0x28

class UOptimusGroomGuideDataProvider : public UComputeDataProvider
{
    class UGroomComponent* Groom;                                                     // 0x0028 (size: 0x8)

}; // Size: 0x30

class UOptimusGroomWriteDataInterface : public UOptimusComputeDataInterface
{
}; // Size: 0x28

class UOptimusGroomWriteDataProvider : public UComputeDataProvider
{
    class UGroomComponent* GroomComponent;                                            // 0x0028 (size: 0x8)

}; // Size: 0x38

#endif
