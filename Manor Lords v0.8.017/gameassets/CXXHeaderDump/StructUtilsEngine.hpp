#ifndef UE4SS_SDK_StructUtilsEngine_HPP
#define UE4SS_SDK_StructUtilsEngine_HPP

#include "StructUtilsEngine_enums.hpp"

class UStructUtilsFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetInstancedStructValue(FInstancedStruct& InstancedStruct, const int32& Value);
    void Reset(FInstancedStruct& InstancedStruct, const class UScriptStruct* StructType);
    bool NotEqual_InstancedStruct(const FInstancedStruct& A, const FInstancedStruct& B);
    FInstancedStruct MakeInstancedStruct(const int32& Value);
    bool IsValid_InstancedStruct(const FInstancedStruct& InstancedStruct);
    EStructUtilsResult IsInstancedStructValid(const FInstancedStruct& InstancedStruct);
    void GetInstancedStructValue(EStructUtilsResult& ExecResult, const FInstancedStruct& InstancedStruct, int32& Value);
    bool EqualEqual_InstancedStruct(const FInstancedStruct& A, const FInstancedStruct& B);
}; // Size: 0x28

#endif
