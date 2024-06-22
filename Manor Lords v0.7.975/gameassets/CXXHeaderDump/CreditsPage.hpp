#ifndef UE4SS_SDK_CreditsPage_HPP
#define UE4SS_SDK_CreditsPage_HPP

class UCreditsPage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Bg;                                                                 // 0x0268 (size: 0x8)
    class UBorder* Border_128;                                                        // 0x0270 (size: 0x8)
    class UVerticalBox* credits;                                                      // 0x0278 (size: 0x8)
    class UImage* Grunge;                                                             // 0x0280 (size: 0x8)
    class UImage* Image_202;                                                          // 0x0288 (size: 0x8)
    class UImage* logo_img;                                                           // 0x0290 (size: 0x8)
    class UmenuButton_C* return_button;                                               // 0x0298 (size: 0x8)
    class UmenuButton_C* secret_button;                                               // 0x02A0 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x02A8 (size: 0x8)
    FCreditsPage_COnDone OnDone;                                                      // 0x02B0 (size: 0x10)
    void OnDone();
    FString Raw Credits Configured;                                                   // 0x02C0 (size: 0x10)
    float RollTime;                                                                   // 0x02D0 (size: 0x4)
    float EndTime;                                                                    // 0x02D4 (size: 0x4)
    float Time;                                                                       // 0x02D8 (size: 0x4)
    bool InSetup;                                                                     // 0x02DC (size: 0x1)
    TArray<FCreditsLine> PendingCreditLines;                                          // 0x02E0 (size: 0x10)
    int32 PerFrameCreationCount;                                                      // 0x02F0 (size: 0x4)

    void Debug_DoRestart();
    void AttemptFinish();
    FEventReply OnMouseDown_ConsiderExit(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void IsCreditsActive(bool& IsActive);
    void UpdateToProgress(float progress);
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
}; // Size: 0x2F4

#endif
