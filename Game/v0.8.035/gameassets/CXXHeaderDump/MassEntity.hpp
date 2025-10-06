#ifndef UE4SS_SDK_MassEntity_HPP
#define UE4SS_SDK_MassEntity_HPP

#include "MassEntity_enums.hpp"

struct FMassChunkFragment
{
}; // Size: 0x1

struct FMassConstSharedFragment
{
}; // Size: 0x1

struct FMassEntityHandle
{
    int32 Index;                                                                      // 0x0000 (size: 0x4)
    int32 SerialNumber;                                                               // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FMassEntityObserverClassesMap
{
    TMap<class UScriptStruct*, class FMassProcessorClassCollection> Container;        // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FMassEntityQuery : public FMassFragmentRequirements
{
}; // Size: 0x320

struct FMassEntityView
{
}; // Size: 0x20

struct FMassFragment
{
}; // Size: 0x1

struct FMassFragmentRequirements
{
}; // Size: 0x268

struct FMassGenericDebugEvent
{
}; // Size: 0x1

struct FMassObserverManager
{
    FMassObserversMap FragmentObservers;                                              // 0x0080 (size: 0xA0)
    FMassObserversMap TagObservers;                                                   // 0x0120 (size: 0xA0)

}; // Size: 0x1C8

struct FMassObserversMap
{
    TMap<class UScriptStruct*, class FMassRuntimePipeline> Container;                 // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FMassProcessingContext
{
    float DeltaSeconds;                                                               // 0x0010 (size: 0x4)
    FInstancedStruct AuxData;                                                         // 0x0018 (size: 0x10)
    bool bFlushCommandBuffer;                                                         // 0x0028 (size: 0x1)

}; // Size: 0x40

struct FMassProcessingPhaseConfig
{
    FName PhaseName;                                                                  // 0x0000 (size: 0x8)
    TSubclassOf<class UMassCompositeProcessor> PhaseGroupClass;                       // 0x0008 (size: 0x8)
    TArray<class UMassProcessor*> ProcessorCDOs;                                      // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FMassProcessorClassCollection
{
    TArray<class TSubclassOf<UMassProcessor>> ClassCollection;                        // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMassProcessorExecutionOrder
{
    FName ExecuteInGroup;                                                             // 0x0000 (size: 0x8)
    TArray<FName> ExecuteBefore;                                                      // 0x0008 (size: 0x10)
    TArray<FName> ExecuteAfter;                                                       // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FMassRuntimePipeline
{
    TArray<class UMassProcessor*> Processors;                                         // 0x0000 (size: 0x10)

}; // Size: 0x18

struct FMassSharedFragment
{
}; // Size: 0x1

struct FMassSubsystemRequirements
{
}; // Size: 0x48

struct FMassTag
{
}; // Size: 0x1

struct FProcessorAuxDataBase
{
}; // Size: 0x1

class UMassCompositeProcessor : public UMassProcessor
{
    FMassRuntimePipeline ChildPipeline;                                               // 0x00B0 (size: 0x18)
    FName GroupName;                                                                  // 0x00C8 (size: 0x8)

}; // Size: 0xF0

class UMassEntitySettings : public UMassModuleSettings
{
    int32 ChunkMemorySize;                                                            // 0x0028 (size: 0x4)
    FString DumpDependencyGraphFileName;                                              // 0x0030 (size: 0x10)
    FMassProcessingPhaseConfig ProcessingPhasesConfig;                                // 0x0040 (size: 0xC0)
    TArray<class UMassProcessor*> ProcessorCDOs;                                      // 0x0100 (size: 0x10)

}; // Size: 0x130

class UMassEntitySubsystem : public UMassSubsystemBase
{
}; // Size: 0x48

class UMassModuleSettings : public UObject
{
}; // Size: 0x28

class UMassObserverProcessor : public UMassProcessor
{
    bool bAutoRegisterWithObserverRegistry;                                           // 0x00B0 (size: 0x1)
    class UScriptStruct* ObservedType;                                                // 0x00B8 (size: 0x8)

}; // Size: 0xC8

class UMassObserverRegistry : public UObject
{
    FMassEntityObserverClassesMap FragmentObservers;                                  // 0x0028 (size: 0xA0)
    FMassEntityObserverClassesMap TagObservers;                                       // 0x00C8 (size: 0xA0)

}; // Size: 0x168

class UMassProcessor : public UObject
{
    FMassProcessorExecutionOrder ExecutionOrder;                                      // 0x0028 (size: 0x28)
    EMassProcessingPhase ProcessingPhase;                                             // 0x0050 (size: 0x1)
    uint8 ExecutionFlags;                                                             // 0x0051 (size: 0x1)
    uint8 bAutoRegisterWithProcessingPhases;                                          // 0x0052 (size: 0x1)
    uint8 bRequiresGameThreadExecution;                                               // 0x0052 (size: 0x1)

}; // Size: 0xB0

class UMassSettings : public UDeveloperSettings
{
    TMap<class FName, class UMassModuleSettings*> ModuleSettings;                     // 0x0038 (size: 0x50)

}; // Size: 0x88

class UMassSubsystemBase : public UWorldSubsystem
{
}; // Size: 0x38

class UMassTickableSubsystemBase : public UTickableWorldSubsystem
{
}; // Size: 0x48

#endif
