#ifndef UE4SS_SDK_LogEntry_HPP
#define UE4SS_SDK_LogEntry_HPP

class ULogEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* NewAnimation_older;                                       // 0x02E8 (size: 0x8)
    class UWidgetAnimation* NewAnimation_1;                                           // 0x02F0 (size: 0x8)
    class UImage* icon_img;                                                           // 0x02F8 (size: 0x8)
    class URichTextBlock* log_rich_text;                                              // 0x0300 (size: 0x8)
    class UButton* logButton;                                                         // 0x0308 (size: 0x8)
    class UTextBlock* LogText;                                                        // 0x0310 (size: 0x8)
    class UTextBlock* reg_date;                                                       // 0x0318 (size: 0x8)
    int32 ID;                                                                         // 0x0320 (size: 0x4)
    class UMainUICPP_C* mainUIref;                                                    // 0x0328 (size: 0x8)
    bool hov;                                                                         // 0x0330 (size: 0x1)
    bool removing;                                                                    // 0x0331 (size: 0x1)
    class AMyPawnCPP_BP3_C* pawnRef;                                                  // 0x0338 (size: 0x8)
    FLogEntry LogEntry;                                                               // 0x0340 (size: 0xA0)
    double timeElapsed;                                                               // 0x03E0 (size: 0x8)
    FString translatedEntryText;                                                      // 0x03E8 (size: 0x10)
    TArray<FString> parsedText;                                                       // 0x03F8 (size: 0x10)

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
}; // Size: 0x408

#endif
