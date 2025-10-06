#ifndef UE4SS_SDK_BigMap_HPP
#define UE4SS_SDK_BigMap_HPP

class UBigMap_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UWidgetAnimation* lerpIn;                                                   // 0x02D8 (size: 0x8)
    class UBorder* blackFade;                                                         // 0x02E0 (size: 0x8)
    class UButton* button_close;                                                      // 0x02E8 (size: 0x8)
    class UImage* Image_67;                                                           // 0x02F0 (size: 0x8)
    class UCanvasPanel* MainCanvas;                                                   // 0x02F8 (size: 0x8)
    class UBorder* map_border;                                                        // 0x0300 (size: 0x8)
    class UCanvasPanel* mapCanvas;                                                    // 0x0308 (size: 0x8)
    class UImage* mapImage;                                                           // 0x0310 (size: 0x8)
    class UScrollBox* ScrollBox_H;                                                    // 0x0318 (size: 0x8)
    class UScrollBox* ScrollBox_V;                                                    // 0x0320 (size: 0x8)
    class UComboBoxString* Targets_ComboBox;                                          // 0x0328 (size: 0x8)
    class UComboBoxString* Traders_ComboBox;                                          // 0x0330 (size: 0x8)
    class UCanvasPanel* TradingCanvas;                                                // 0x0338 (size: 0x8)
    bool LMB;                                                                         // 0x0340 (size: 0x1)
    FVector2D lastRMB;                                                                // 0x0348 (size: 0x10)
    class UMainUICPP_C* parentRef;                                                    // 0x0358 (size: 0x8)
    FVector2D OldPos;                                                                 // 0x0360 (size: 0x10)
    TArray<class UminimapIcon_C*> minimapIcons;                                       // 0x0370 (size: 0x10)
    TArray<class UMinimapTree_C*> minimapTrees;                                       // 0x0380 (size: 0x10)
    bool closeToIcon;                                                                 // 0x0390 (size: 0x1)

    void SequenceEvent__ENTRYPOINTBigMap();
    void SequenceEvent_0();
    void Construct();
    void BndEvt__button_close_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void resetTrees();
    void OnAnimationFinished_Event_0();
    void Collapse();
    void End();
    void Begin();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Flip World Rendering();
    void ExecuteUbergraph_BigMap(int32 EntryPoint);
}; // Size: 0x391

#endif
