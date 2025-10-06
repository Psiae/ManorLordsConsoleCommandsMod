#ifndef UE4SS_SDK_MassReplication_HPP
#define UE4SS_SDK_MassReplication_HPP

struct FMassBubbleInfoClassHandle : public FSimpleIndexedHandleBase
{
}; // Size: 0x4

struct FMassClientBubbleInfoData
{
    TArray<class AMassClientBubbleInfoBase*> Bubbles;                                 // 0x0000 (size: 0x10)
    TSubclassOf<class AMassClientBubbleInfoBase> BubbleClass;                         // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FMassClientBubbleSerializerBase : public FFastArraySerializer
{
    class UWorld* World;                                                              // 0x0108 (size: 0x8)
    class UMassSpawnerSubsystem* SpawnerSubsystem;                                    // 0x0110 (size: 0x8)
    class UMassReplicationSubsystem* ReplicationSubsystem;                            // 0x0128 (size: 0x8)

}; // Size: 0x138

struct FMassClientHandle : public FIndexedHandleBase
{
}; // Size: 0x8

struct FMassFastArrayItemBase : public FFastArraySerializerItem
{
    FMassReplicatedAgentHandle Handle;                                                // 0x000C (size: 0x4)

}; // Size: 0x10

struct FMassInReplicationGridTag : public FMassTag
{
}; // Size: 0x1

struct FMassNetworkIDFragment : public FMassFragment
{
}; // Size: 0x4

struct FMassReplicatedAgentFragment : public FMassFragment
{
}; // Size: 0x18

struct FMassReplicatedAgentHandle : public FCompactIndexedHandleBase
{
}; // Size: 0x4

struct FMassReplicationGridCellLocationFragment : public FMassFragment
{
}; // Size: 0xC

struct FMassReplicationLODFragment : public FMassFragment
{
}; // Size: 0x2

struct FMassReplicationParameters : public FMassConstSharedFragment
{
    float LODDistance;                                                                // 0x0000 (size: 0x10)
    float BufferHysteresisOnDistancePercentage;                                       // 0x0010 (size: 0x4)
    int32 LODMaxCount;                                                                // 0x0014 (size: 0x10)
    int32 LODMaxCountPerViewer;                                                       // 0x0024 (size: 0x10)
    float UpdateInterval;                                                             // 0x0034 (size: 0x10)
    TSubclassOf<class AMassClientBubbleInfoBase> BubbleInfoClass;                     // 0x0048 (size: 0x8)
    TSubclassOf<class UMassReplicatorBase> ReplicatorClass;                           // 0x0050 (size: 0x8)

}; // Size: 0x58

struct FMassReplicationSharedFragment : public FMassSharedFragment
{
    TArray<class AMassClientBubbleInfoBase*> BubbleInfos;                             // 0x0020 (size: 0x10)
    class UMassReplicatorBase* CachedReplicator;                                      // 0x2390 (size: 0x8)

}; // Size: 0x23A0

struct FMassReplicationViewerInfoFragment : public FMassFragment
{
}; // Size: 0x18

struct FReplicatedAgentBase
{
    FMassNetworkID NetID;                                                             // 0x0000 (size: 0x4)
    FMassEntityTemplateID TemplateID;                                                 // 0x0008 (size: 0x20)

}; // Size: 0x28

struct FReplicatedAgentPositionYawData
{
    FVector position;                                                                 // 0x0000 (size: 0x18)
    float Yaw;                                                                        // 0x0018 (size: 0x4)

}; // Size: 0x20

class AMassClientBubbleInfoBase : public AInfo
{
}; // Size: 0x2C0

class UMassNetworkIDFragmentInitializer : public UMassObserverProcessor
{
}; // Size: 0x3F0

class UMassReplicationGridProcessor : public UMassProcessor
{
}; // Size: 0xA10

class UMassReplicationGridRemoverProcessor : public UMassObserverProcessor
{
}; // Size: 0x3F0

class UMassReplicationProcessor : public UMassProcessor
{
    class UMassReplicationSubsystem* ReplicationSubsystem;                            // 0x00B0 (size: 0x8)

}; // Size: 0x1060

class UMassReplicationSettings : public UMassModuleSettings
{
    float ReplicationGridCellSize;                                                    // 0x0028 (size: 0x4)

}; // Size: 0x30

class UMassReplicationSubsystem : public UMassSubsystemBase
{
    TArray<FMassClientBubbleInfoData> BubbleInfoArray;                                // 0x0068 (size: 0x10)
    class UWorld* World;                                                              // 0x00A8 (size: 0x8)
    class UMassLODSubsystem* MassLODSubsystem;                                        // 0x00B0 (size: 0x8)

}; // Size: 0x1E8

class UMassReplicationTrait : public UMassEntityTraitBase
{
    FMassReplicationParameters Params;                                                // 0x0028 (size: 0x58)

}; // Size: 0x80

class UMassReplicatorBase : public UObject
{
}; // Size: 0x28

#endif
