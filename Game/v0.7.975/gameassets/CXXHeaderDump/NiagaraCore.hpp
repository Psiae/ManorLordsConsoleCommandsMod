#ifndef UE4SS_SDK_NiagaraCore_HPP
#define UE4SS_SDK_NiagaraCore_HPP

struct FNiagaraCompileHash
{
    TArray<uint8> DataHash;                                                           // 0x0000 (size: 0x10)

}; // Size: 0x10

class UNiagaraDataInterfaceBase : public UNiagaraMergeable
{
}; // Size: 0x28

class UNiagaraMergeable : public UObject
{
}; // Size: 0x28

#endif
