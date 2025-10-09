#ifndef UE4SS_SDK_BigMap_HPP
#define UE4SS_SDK_BigMap_HPP

class UBigMap_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* lerpIn;                                                   // 0x0268 (size: 0x8)
    class UBorder* blackFade;                                                         // 0x0270 (size: 0x8)
    class UButton* button_close;                                                      // 0x0278 (size: 0x8)
    class UImage* Image_67;                                                           // 0x0280 (size: 0x8)
    class UCanvasPanel* mainCanvas;                                                   // 0x0288 (size: 0x8)
    class UBorder* map_border;                                                        // 0x0290 (size: 0x8)
    class UCanvasPanel* mapCanvas;                                                    // 0x0298 (size: 0x8)
    class UImage* mapImage;                                                           // 0x02A0 (size: 0x8)
    class UScrollBox* ScrollBox_H;                                                    // 0x02A8 (size: 0x8)
    class UScrollBox* ScrollBox_V;                                                    // 0x02B0 (size: 0x8)
    class UComboBoxString* Targets_ComboBox;                                          // 0x02B8 (size: 0x8)
    class UComboBoxString* Traders_ComboBox;                                          // 0x02C0 (size: 0x8)
    class UCanvasPanel* TradingCanvas;                                                // 0x02C8 (size: 0x8)
    bool LMB;                                                                         // 0x02D0 (size: 0x1)
    FVector2D lastRMB;                                                                // 0x02D4 (size: 0x8)
    class UMainUICPP_C* parentRef;                                                    // 0x02E0 (size: 0x8)
    FVector2D OldPos;                                                                 // 0x02E8 (size: 0x8)
    TArray<class UminimapIcon_C*> minimapIcons;                                       // 0x02F0 (size: 0x10)
    TArray<class UMinimapTree_C*> minimapTrees;                                       // 0x0300 (size: 0x10)
    bool closeToIcon;                                                                 // 0x0310 (size: 0x1)

    void SequenceEvent__ENTRYPOINTBigMap_0();
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
}; // Size: 0x311

#endif
