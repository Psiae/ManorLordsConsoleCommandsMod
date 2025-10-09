#ifndef UE4SS_SDK_tutorialMessage_HPP
#define UE4SS_SDK_tutorialMessage_HPP

class UtutorialMessage_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    class UWidgetAnimation* openAnim;                                                 // 0x0358 (size: 0x8)
    class UButton* Button_356;                                                        // 0x0360 (size: 0x8)
    class UTextBlock* got_it_txt;                                                     // 0x0368 (size: 0x8)
    class UBorder* MainBorder;                                                        // 0x0370 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton;                                    // 0x0378 (size: 0x8)
    class UMLDefaultCheckbox_C* MLDefaultCheckbox;                                    // 0x0380 (size: 0x8)
    class URichTextBlock* RichTextBlock_39;                                           // 0x0388 (size: 0x8)
    class UTextBlock* skip_tutorials_txt;                                             // 0x0390 (size: 0x8)
    class UImage* spacera;                                                            // 0x0398 (size: 0x8)
    class UImage* spacera_1;                                                          // 0x03A0 (size: 0x8)
    class UImage* spacerB;                                                            // 0x03A8 (size: 0x8)
    FVector Pos;                                                                      // 0x03B0 (size: 0x18)
    FText tutorialText;                                                               // 0x03C8 (size: 0x10)
    bool realWorld;                                                                   // 0x03D8 (size: 0x1)
    bool pausesGame;                                                                  // 0x03D9 (size: 0x1)
    bool pausedBeforeTutorial;                                                        // 0x03DA (size: 0x1)
    bool canProjectPosition;                                                          // 0x03DB (size: 0x1)
    double gameSpeedBefore;                                                           // 0x03E0 (size: 0x8)
    double timeDialationBefore;                                                       // 0x03E8 (size: 0x8)
    int32 daySpawned;                                                                 // 0x03F0 (size: 0x4)
    int32 currentDay;                                                                 // 0x03F4 (size: 0x4)
    bool visibleInMapView;                                                            // 0x03F8 (size: 0x1)
    class AMyPawnCPP_BP3_C* playerRef;                                                // 0x0400 (size: 0x8)
    FVector2D screenPositionFixed;                                                    // 0x0408 (size: 0x10)

    FNaviSubGridLayout ComputeSubGridLayout();
    FVector2D SetPositiononScreenClamped(FVector2D InVec);
    void Update Visibility Depending On Widget Settings();
    void checkIfReadingMessage(bool& reads);
    void updatePos();
    void positionAndClamp();
    void BndEvt__Button_356_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_tutorialMessage(int32 EntryPoint);
}; // Size: 0x418

#endif
