#ifndef UE4SS_SDK_UnrealUSDWrapper_HPP
#define UE4SS_SDK_UnrealUSDWrapper_HPP

#include "UnrealUSDWrapper_enums.hpp"

struct FMatrix2D
{
    FVector2D Row0;                                                                   // 0x0000 (size: 0x10)
    FVector2D Row1;                                                                   // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FMatrix3D
{
    FVector Row0;                                                                     // 0x0000 (size: 0x18)
    FVector Row1;                                                                     // 0x0018 (size: 0x18)
    FVector Row2;                                                                     // 0x0030 (size: 0x18)

}; // Size: 0x48

#endif
