#ifndef UE4SS_SDK_genericAchievement_EventMessage_HPP
#define UE4SS_SDK_genericAchievement_EventMessage_HPP

class UgenericAchievement_EventMessage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* scaryTint;                                                // 0x0268 (size: 0x8)
    class UWidgetAnimation* fadeIn_leaveSpace;                                        // 0x0270 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x0278 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x0280 (size: 0x8)
    class UTextBlock* bottomTxt;                                                      // 0x0288 (size: 0x8)
    class UVerticalBox* main_titles_VB;                                               // 0x0290 (size: 0x8)
    class UTextBlock* main_txt;                                                       // 0x0298 (size: 0x8)
    class UImage* Overlay;                                                            // 0x02A0 (size: 0x8)
    class UBorder* ribbon_border;                                                     // 0x02A8 (size: 0x8)
    class UImage* Spacer;                                                             // 0x02B0 (size: 0x8)
    FText Text;                                                                       // 0x02B8 (size: 0x18)
    bool atTheTop?;                                                                   // 0x02D0 (size: 0x1)
    FText textSecondary;                                                              // 0x02D8 (size: 0x18)
    class USoundBase* soundToBePlayed;                                                // 0x02F0 (size: 0x8)
    FName msgType;                                                                    // 0x02F8 (size: 0x8)
    class Ureward_dev_C* reward_dev;                                                  // 0x0300 (size: 0x8)
    bool animFinished;                                                                // 0x0308 (size: 0x1)

    void SequenceEvent__ENTRYPOINTgenericAchievement_EventMessage_0();
    void setOverlayTextureParam(class UTexture* Value);
    void setOverlayGraphicsBasedOnMsgTYpe();
    void soundDesign(FName msgType);
    void switchAnchorsToTop(class UWidget* Widget, FVector2D InPosition);
    void fadeOutAndDie();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void Construct();
    void destoryWidget();
    void ExecuteUbergraph_genericAchievement_EventMessage(int32 EntryPoint);
}; // Size: 0x309

#endif
