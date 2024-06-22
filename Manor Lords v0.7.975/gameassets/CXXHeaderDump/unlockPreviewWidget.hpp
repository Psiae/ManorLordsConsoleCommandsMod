#ifndef UE4SS_SDK_unlockPreviewWidget_HPP
#define UE4SS_SDK_unlockPreviewWidget_HPP

class UunlockPreviewWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* TextBlock;                                                      // 0x0268 (size: 0x8)
    class UTextBlock* TextBlock_29;                                                   // 0x0270 (size: 0x8)
    class URichTextBlock* unlock_desr;                                                // 0x0278 (size: 0x8)
    class UImage* unlock_icon;                                                        // 0x0280 (size: 0x8)
    FText title_translated;                                                           // 0x0288 (size: 0x18)
    FText description_translated;                                                     // 0x02A0 (size: 0x18)
    class UTexture2D* Icon;                                                           // 0x02B8 (size: 0x8)
    bool isUpgrade;                                                                   // 0x02C0 (size: 0x1)

    void Construct();
    void ExecuteUbergraph_unlockPreviewWidget(int32 EntryPoint);
}; // Size: 0x2C1

#endif
