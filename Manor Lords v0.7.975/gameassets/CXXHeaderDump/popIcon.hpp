#ifndef UE4SS_SDK_popIcon_HPP
#define UE4SS_SDK_popIcon_HPP

class UpopIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* NewAnimation_1;                                           // 0x0268 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0270 (size: 0x8)
    class UButton* popIcon_button;                                                    // 0x0278 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x0280 (size: 0x8)
    int32 Type;                                                                       // 0x0288 (size: 0x4)
    class UMainUICPP_C* daddy;                                                        // 0x0290 (size: 0x8)

    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void ExecuteUbergraph_popIcon(int32 EntryPoint);
}; // Size: 0x298

#endif
