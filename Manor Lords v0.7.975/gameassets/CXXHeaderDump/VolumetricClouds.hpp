#ifndef UE4SS_SDK_VolumetricClouds_HPP
#define UE4SS_SDK_VolumetricClouds_HPP

class AVolumetricClouds_C : public AStaticMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UMaterialInstanceConstant* CloudsMI;                                        // 0x0238 (size: 0x8)
    class UMaterialInstanceConstant* ShadowMI;                                        // 0x0240 (size: 0x8)
    class UMaterialInstanceDynamic* ShadowMID;                                        // 0x0248 (size: 0x8)

    void RenderShadows_EDITOR();
    void CreateMID();
    void RenderShadows();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_VolumetricClouds(int32 EntryPoint);
}; // Size: 0x250

#endif
