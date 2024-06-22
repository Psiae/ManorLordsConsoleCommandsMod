#ifndef UE4SS_SDK_levelButton_HPP
#define UE4SS_SDK_levelButton_HPP

class UlevelButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* level_button;                                                      // 0x0268 (size: 0x8)
    class UImage* level_Image_0;                                                      // 0x0270 (size: 0x8)
    class UImage* level_progress;                                                     // 0x0278 (size: 0x8)
    class UScaleBox* level_ScaleBox_1;                                                // 0x0280 (size: 0x8)
    class UTextBlock* lvl_text;                                                       // 0x0288 (size: 0x8)
    class UTextBlock* lvlup_txt;                                                      // 0x0290 (size: 0x8)
    bool ownedByMainPlayer;                                                           // 0x0298 (size: 0x1)
    class ARegion* Region;                                                            // 0x02A0 (size: 0x8)
    bool clickable;                                                                   // 0x02A8 (size: 0x1)
    bool canBlink;                                                                    // 0x02A9 (size: 0x1)
    int32 lv;                                                                         // 0x02AC (size: 0x4)
    int32 prevLv;                                                                     // 0x02B0 (size: 0x4)
    class UMaterialInstanceDynamic* dynamicProgressMat;                               // 0x02B8 (size: 0x8)

    void updateTooltiup();
    void setBlinking(bool canBlink);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void updateContents();
    void BndEvt__level_button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void updateDevButtonAnim();
    void Construct();
    void ExecuteUbergraph_levelButton(int32 EntryPoint);
}; // Size: 0x2C0

#endif
