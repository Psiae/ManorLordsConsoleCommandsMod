#ifndef UE4SS_SDK_unlockPreviewWidget_HPP
#define UE4SS_SDK_unlockPreviewWidget_HPP

class UunlockPreviewWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* TextBlock;                                                      // 0x02E8 (size: 0x8)
    class UTextBlock* TextBlock_29;                                                   // 0x02F0 (size: 0x8)
    class URichTextBlock* unlock_desr;                                                // 0x02F8 (size: 0x8)
    class UImage* unlock_icon;                                                        // 0x0300 (size: 0x8)
    FText title_translated;                                                           // 0x0308 (size: 0x10)
    FText description_translated;                                                     // 0x0318 (size: 0x10)
    class UTexture2D* Icon;                                                           // 0x0328 (size: 0x8)
    bool isUpgrade;                                                                   // 0x0330 (size: 0x1)

    void Construct();
    void ExecuteUbergraph_unlockPreviewWidget(int32 EntryPoint);
}; // Size: 0x331

#endif
