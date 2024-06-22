#ifndef UE4SS_SDK_PropertyPath_HPP
#define UE4SS_SDK_PropertyPath_HPP

struct FCachedPropertyPath
{
    TArray<FPropertyPathSegment> Segments;                                            // 0x0000 (size: 0x10)
    class UFunction* CachedFunction;                                                  // 0x0018 (size: 0x8)

}; // Size: 0x28

struct FPropertyPathSegment
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    int32 ArrayIndex;                                                                 // 0x0008 (size: 0x4)
    class UStruct* Struct;                                                            // 0x0010 (size: 0x8)

}; // Size: 0x28

#endif
