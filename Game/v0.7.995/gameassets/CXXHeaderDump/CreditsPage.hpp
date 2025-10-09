#ifndef UE4SS_SDK_CreditsPage_HPP
#define UE4SS_SDK_CreditsPage_HPP

class UCreditsPage_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    class UImage* bg;                                                                 // 0x0358 (size: 0x8)
    class UBorder* Border_128;                                                        // 0x0360 (size: 0x8)
    class UVerticalBox* credits;                                                      // 0x0368 (size: 0x8)
    class UImage* Grunge;                                                             // 0x0370 (size: 0x8)
    class UImage* Image_202;                                                          // 0x0378 (size: 0x8)
    class UImage* logo_img;                                                           // 0x0380 (size: 0x8)
    class UmenuButton_C* return_button;                                               // 0x0388 (size: 0x8)
    class UmenuButton_C* secret_button;                                               // 0x0390 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x0398 (size: 0x8)
    FCreditsPage_COnDone OnDone;                                                      // 0x03A0 (size: 0x10)
    void OnDone();
    FString Raw Credits Configured;                                                   // 0x03B0 (size: 0x10)
    double RollTime;                                                                  // 0x03C0 (size: 0x8)
    double EndTime;                                                                   // 0x03C8 (size: 0x8)
    double Time;                                                                      // 0x03D0 (size: 0x8)
    bool InSetup;                                                                     // 0x03D8 (size: 0x1)
    TArray<FCreditsLine> PendingCreditLines;                                          // 0x03E0 (size: 0x10)
    int32 PerFrameCreationCount;                                                      // 0x03F0 (size: 0x4)

    FNaviSubGridLayout ComputeSubGridLayout();
    void Debug_DoRestart();
    void AttemptFinish();
    FEventReply OnMouseDown_ConsiderExit(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void IsCreditsActive(bool& IsActive);
    void UpdateToProgress(double progress);
    void TriggerSetupPhase();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnReturnButton();
    void setupCredits();
    void ProgressSetupPhase();
    void OnSecretButton();
    void ExecuteUbergraph_CreditsPage(int32 EntryPoint);
    void OnDone__DelegateSignature();
}; // Size: 0x3F4

#endif
