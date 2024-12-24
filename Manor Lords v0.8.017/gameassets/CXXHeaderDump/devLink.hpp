#ifndef UE4SS_SDK_devLink_HPP
#define UE4SS_SDK_devLink_HPP

class UdevLink_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* linkImage;                                                          // 0x02E8 (size: 0x8)
    FVector2D BrushSize;                                                              // 0x02F0 (size: 0x10)
    class UdevelopmentBranchWidget_C* topLeft;                                        // 0x0300 (size: 0x8)
    class UdevelopmentBranchWidget_C* topRight;                                       // 0x0308 (size: 0x8)
    class UMaterialInterface* Material;                                               // 0x0310 (size: 0x8)
    class UMaterialInstanceDynamic* dynamicMaterialInstance;                          // 0x0318 (size: 0x8)
    class UdevelopmentBranchWidget_C* Origin;                                         // 0x0320 (size: 0x8)
    bool homeIsCenter;                                                                // 0x0328 (size: 0x1)

    void updateLinkActive(class ARegion* Region);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_devLink(int32 EntryPoint);
}; // Size: 0x329

#endif
