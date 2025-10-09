#ifndef UE4SS_SDK_LogEntry_HPP
#define UE4SS_SDK_LogEntry_HPP

class ULogEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* NewAnimation_older;                                       // 0x0268 (size: 0x8)
    class UWidgetAnimation* NewAnimation_1;                                           // 0x0270 (size: 0x8)
    class UImage* icon_img;                                                           // 0x0278 (size: 0x8)
    class URichTextBlock* log_rich_text;                                              // 0x0280 (size: 0x8)
    class UButton* logButton;                                                         // 0x0288 (size: 0x8)
    class UTextBlock* LogText;                                                        // 0x0290 (size: 0x8)
    class UTextBlock* reg_date;                                                       // 0x0298 (size: 0x8)
    int32 ID;                                                                         // 0x02A0 (size: 0x4)
    class UMainUICPP_C* mainUIRef;                                                    // 0x02A8 (size: 0x8)
    bool hov;                                                                         // 0x02B0 (size: 0x1)
    bool removing;                                                                    // 0x02B1 (size: 0x1)
    class AMyPawnCPP_BP3_C* pawnRef;                                                  // 0x02B8 (size: 0x8)
    FLogEntry LogEntry;                                                               // 0x02C0 (size: 0x98)
    float timeElapsed;                                                                // 0x0358 (size: 0x4)
    FString translatedEntryText;                                                      // 0x0360 (size: 0x10)
    TArray<FString> parsedText;                                                       // 0x0370 (size: 0x10)

    int32 calculateMonthFromDay(int32 dayNo);
    bool isLatestEntry();
    void playTutorialMessage();
    void RemoveWithAnimation();
    void Remove();
    void BndEvt__logButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__logButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__logButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void RMB();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_LogEntry(int32 EntryPoint);
}; // Size: 0x380

#endif
