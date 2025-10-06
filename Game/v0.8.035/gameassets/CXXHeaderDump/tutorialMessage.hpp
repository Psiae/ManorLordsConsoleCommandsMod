#ifndef UE4SS_SDK_tutorialMessage_HPP
#define UE4SS_SDK_tutorialMessage_HPP

class UtutorialMessage_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UWidgetAnimation* openAnim;                                                 // 0x0350 (size: 0x8)
    class UButton* Button_356;                                                        // 0x0358 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0360 (size: 0x8)
    class UTextBlock* got_it_txt;                                                     // 0x0368 (size: 0x8)
    class UBorder* mainBorder;                                                        // 0x0370 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton;                                    // 0x0378 (size: 0x8)
    class UMLDefaultCheckbox_C* MLDefaultCheckbox;                                    // 0x0380 (size: 0x8)
    class URichTextBlock* RichTextBlock_39;                                           // 0x0388 (size: 0x8)
    class URichTextBlock* RichTextBlock_222;                                          // 0x0390 (size: 0x8)
    class UTextBlock* skip_tutorials_txt;                                             // 0x0398 (size: 0x8)
    class UImage* spacera;                                                            // 0x03A0 (size: 0x8)
    class UImage* spacera_1;                                                          // 0x03A8 (size: 0x8)
    class UImage* spacera_3;                                                          // 0x03B0 (size: 0x8)
    class UVerticalBox* TutSubsections_VB;                                            // 0x03B8 (size: 0x8)
    FVector Pos;                                                                      // 0x03C0 (size: 0x18)
    FText tutorialText;                                                               // 0x03D8 (size: 0x10)
    bool realWorld;                                                                   // 0x03E8 (size: 0x1)
    bool pausesGame;                                                                  // 0x03E9 (size: 0x1)
    bool pausedBeforeTutorial;                                                        // 0x03EA (size: 0x1)
    bool canProjectPosition;                                                          // 0x03EB (size: 0x1)
    double gameSpeedBefore;                                                           // 0x03F0 (size: 0x8)
    double timeDialationBefore;                                                       // 0x03F8 (size: 0x8)
    int32 daySpawned;                                                                 // 0x0400 (size: 0x4)
    int32 CurrentDay;                                                                 // 0x0404 (size: 0x4)
    bool visibleInMapView;                                                            // 0x0408 (size: 0x1)
    class AMyPawnCPP_BP3_C* playerRef;                                                // 0x0410 (size: 0x8)
    FVector2D screenPositionFixed;                                                    // 0x0418 (size: 0x10)
    FText HeaderText;                                                                 // 0x0428 (size: 0x10)
    TArray<FName> SubSections;                                                        // 0x0438 (size: 0x10)

    void SpawnSubsections();
    FNaviSubGridLayout ComputeSubGridLayout();
    FVector2D SetPositiononScreenClamped(FVector2D InVec);
    void Update Visibility Depending On Widget Settings();
    void checkIfReadingMessage(bool& reads);
    void updatePos();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__Button_356_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void positionAndClamp();
    void ExecuteUbergraph_tutorialMessage(int32 EntryPoint);
}; // Size: 0x448

#endif
