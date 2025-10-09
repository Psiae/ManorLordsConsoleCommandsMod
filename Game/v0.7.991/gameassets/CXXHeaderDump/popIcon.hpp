#ifndef UE4SS_SDK_popIcon_HPP
#define UE4SS_SDK_popIcon_HPP

class UpopIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* NewAnimation_1;                                           // 0x02E8 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02F0 (size: 0x8)
    class UButton* popIcon_button;                                                    // 0x02F8 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x0300 (size: 0x8)
    int32 Type;                                                                       // 0x0308 (size: 0x4)
    class UMainUICPP_C* daddy;                                                        // 0x0310 (size: 0x8)

    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void ExecuteUbergraph_popIcon(int32 EntryPoint);
}; // Size: 0x318

#endif
