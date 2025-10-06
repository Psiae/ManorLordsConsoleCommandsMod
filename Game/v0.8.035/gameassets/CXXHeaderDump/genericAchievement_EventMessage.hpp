#ifndef UE4SS_SDK_genericAchievement_EventMessage_HPP
#define UE4SS_SDK_genericAchievement_EventMessage_HPP

class UgenericAchievement_EventMessage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UWidgetAnimation* scaryTint;                                                // 0x02D8 (size: 0x8)
    class UWidgetAnimation* fadeIn_leaveSpace;                                        // 0x02E0 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x02E8 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x02F0 (size: 0x8)
    class UTextBlock* bottomTxt;                                                      // 0x02F8 (size: 0x8)
    class UVerticalBox* main_titles_VB;                                               // 0x0300 (size: 0x8)
    class UTextBlock* main_txt;                                                       // 0x0308 (size: 0x8)
    class UImage* Overlay;                                                            // 0x0310 (size: 0x8)
    class UBorder* ribbon_border;                                                     // 0x0318 (size: 0x8)
    class UImage* Spacer;                                                             // 0x0320 (size: 0x8)
    FText Text;                                                                       // 0x0328 (size: 0x10)
    bool atTheTop?;                                                                   // 0x0338 (size: 0x1)
    FText textSecondary;                                                              // 0x0340 (size: 0x10)
    class USoundBase* soundToBePlayed;                                                // 0x0350 (size: 0x8)
    FName msgType;                                                                    // 0x0358 (size: 0x8)
    bool animFinished;                                                                // 0x0360 (size: 0x1)

    void SequenceEvent__ENTRYPOINTgenericAchievement_EventMessage();
    void setOverlayTextureParam(class UTexture* Value);
    void setOverlayGraphicsBasedOnMsgTYpe();
    void soundDesign(FName msgType);
    void switchAnchorsToTop(class UWidget* Widget, FVector2D InPosition);
    void Construct();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void fadeOutAndDie();
    void destoryWidget();
    void ExecuteUbergraph_genericAchievement_EventMessage(int32 EntryPoint);
}; // Size: 0x361

#endif
