#ifndef UE4SS_SDK_NiagaraCore_HPP
#define UE4SS_SDK_NiagaraCore_HPP

#include "NiagaraCore_enums.hpp"

struct FNiagaraCompileHash
{
    TArray<uint8> DataHash;                                                           // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FNiagaraVariableCommonReference
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    class UObject* UnderlyingType;                                                    // 0x0008 (size: 0x8)

}; // Size: 0x10

class UNiagaraDataInterfaceBase : public UNiagaraMergeable
{
}; // Size: 0x28

class UNiagaraMergeable : public UObject
{
}; // Size: 0x28

#endif
