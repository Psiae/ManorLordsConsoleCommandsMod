#ifndef UE4SS_SDK_levelButton_HPP
#define UE4SS_SDK_levelButton_HPP

class UlevelButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* level_button;                                                      // 0x02E8 (size: 0x8)
    class UImage* level_Image_0;                                                      // 0x02F0 (size: 0x8)
    class UImage* level_progress;                                                     // 0x02F8 (size: 0x8)
    class UScaleBox* level_ScaleBox_1;                                                // 0x0300 (size: 0x8)
    class UTextBlock* lvl_text;                                                       // 0x0308 (size: 0x8)
    class UTextBlock* lvlup_txt;                                                      // 0x0310 (size: 0x8)
    bool ownedByMainPlayer;                                                           // 0x0318 (size: 0x1)
    class ARegion* Region;                                                            // 0x0320 (size: 0x8)
    bool clickable;                                                                   // 0x0328 (size: 0x1)
    bool canBlink;                                                                    // 0x0329 (size: 0x1)
    int32 lv;                                                                         // 0x032C (size: 0x4)
    int32 prevLv;                                                                     // 0x0330 (size: 0x4)
    class UMaterialInstanceDynamic* dynamicProgressMat;                               // 0x0338 (size: 0x8)

    void updateTooltiup();
    void setBlinking(bool canBlink);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void updateContents();
    void BndEvt__level_button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void updateDevButtonAnim();
    void Construct();
    void ExecuteUbergraph_levelButton(int32 EntryPoint);
}; // Size: 0x340

#endif
