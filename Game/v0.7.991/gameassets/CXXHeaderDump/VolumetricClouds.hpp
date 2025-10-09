#ifndef UE4SS_SDK_VolumetricClouds_HPP
#define UE4SS_SDK_VolumetricClouds_HPP

class AVolumetricClouds_C : public AStaticMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    class UMaterialInstanceConstant* CloudsMI;                                        // 0x02A8 (size: 0x8)
    class UMaterialInstanceConstant* ShadowMI;                                        // 0x02B0 (size: 0x8)
    class UMaterialInstanceDynamic* ShadowMID;                                        // 0x02B8 (size: 0x8)

    void RenderShadows_EDITOR();
    void CreateMID();
    void RenderShadows();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_VolumetricClouds(int32 EntryPoint);
}; // Size: 0x2C0

#endif
