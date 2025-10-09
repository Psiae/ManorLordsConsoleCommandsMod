#ifndef UE4SS_SDK_tutorialMessage_HPP
#define UE4SS_SDK_tutorialMessage_HPP

class UtutorialMessage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* openAnim;                                                 // 0x0268 (size: 0x8)
    class UButton* Button_356;                                                        // 0x0270 (size: 0x8)
    class UCheckBox* CheckBox_64;                                                     // 0x0278 (size: 0x8)
    class UTextBlock* got_it_txt;                                                     // 0x0280 (size: 0x8)
    class UBorder* MainBorder;                                                        // 0x0288 (size: 0x8)
    class URichTextBlock* RichTextBlock_39;                                           // 0x0290 (size: 0x8)
    class UTextBlock* skip_tutorials_txt;                                             // 0x0298 (size: 0x8)
    class UImage* spacera;                                                            // 0x02A0 (size: 0x8)
    class UImage* spacera_1;                                                          // 0x02A8 (size: 0x8)
    class UImage* spacerB;                                                            // 0x02B0 (size: 0x8)
    FVector Pos;                                                                      // 0x02B8 (size: 0xC)
    FText tutorialText;                                                               // 0x02C8 (size: 0x18)
    bool realWorld;                                                                   // 0x02E0 (size: 0x1)
    bool pausesGame;                                                                  // 0x02E1 (size: 0x1)
    bool pausedBeforeTutorial;                                                        // 0x02E2 (size: 0x1)
    bool canProjectPosition;                                                          // 0x02E3 (size: 0x1)
    float gameSpeedBefore;                                                            // 0x02E4 (size: 0x4)
    float timeDialationBefore;                                                        // 0x02E8 (size: 0x4)
    int32 daySpawned;                                                                 // 0x02EC (size: 0x4)
    int32 currentDay;                                                                 // 0x02F0 (size: 0x4)
    bool visibleInMapView;                                                            // 0x02F4 (size: 0x1)
    class AMyPawnCPP_BP3_C* playerRef;                                                // 0x02F8 (size: 0x8)
    FVector2D screenPositionFixed;                                                    // 0x0300 (size: 0x8)

    FVector2D SetPositiononScreenClamped(FVector2D InVec);
    void Update Visibility Depending On Widget Settings();
    void checkIfReadingMessage(bool& reads);
    void updatePos();
    void BndEvt__Button_356_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void positionAndClamp();
    void ExecuteUbergraph_tutorialMessage(int32 EntryPoint);
}; // Size: 0x308

#endif
