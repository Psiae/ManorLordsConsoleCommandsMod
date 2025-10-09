#ifndef UE4SS_SDK_devLink_HPP
#define UE4SS_SDK_devLink_HPP

class UdevLink_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* linkImage;                                                          // 0x0268 (size: 0x8)
    FVector2D BrushSize;                                                              // 0x0270 (size: 0x8)
    class UdevelopmentBranchWidget_C* topLeft;                                        // 0x0278 (size: 0x8)
    class UdevelopmentBranchWidget_C* topRight;                                       // 0x0280 (size: 0x8)
    class UMaterialInterface* Material;                                               // 0x0288 (size: 0x8)
    class UMaterialInstanceDynamic* dynamicMaterialInstance;                          // 0x0290 (size: 0x8)
    class UdevelopmentBranchWidget_C* Origin;                                         // 0x0298 (size: 0x8)
    bool homeIsCenter;                                                                // 0x02A0 (size: 0x1)

    void updateLinkActive(class ARegion* Region);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_devLink(int32 EntryPoint);
}; // Size: 0x2A1

#endif
