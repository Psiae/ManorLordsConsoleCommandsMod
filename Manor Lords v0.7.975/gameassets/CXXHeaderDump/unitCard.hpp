#ifndef UE4SS_SDK_unitCard_HPP
#define UE4SS_SDK_unitCard_HPP

class UunitCard_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* open_blop;                                                // 0x0268 (size: 0x8)
    class UWidgetAnimation* Open;                                                     // 0x0270 (size: 0x8)
    class UImage* bar_img;                                                            // 0x0278 (size: 0x8)
    class UButton* Button_29;                                                         // 0x0280 (size: 0x8)
    class UBorder* ctrl_group;                                                        // 0x0288 (size: 0x8)
    class UTextBlock* ctrl_group_txt;                                                 // 0x0290 (size: 0x8)
    class UProgressBar* fatigue_ProgressBar;                                          // 0x0298 (size: 0x8)
    class UImage* gradientImg;                                                        // 0x02A0 (size: 0x8)
    class UCanvasPanel* mainCanvas;                                                   // 0x02A8 (size: 0x8)
    class UProgressBar* morale_ProgressBar_72;                                        // 0x02B0 (size: 0x8)
    class UTextBlock* NUMBER_txt;                                                     // 0x02B8 (size: 0x8)
    class UOverlay* Overlay_0;                                                        // 0x02C0 (size: 0x8)
    class UProgressBar* ProgressBar_73;                                               // 0x02C8 (size: 0x8)
    class UImage* selectedImg;                                                        // 0x02D0 (size: 0x8)
    class USizeBox* SizeBox;                                                          // 0x02D8 (size: 0x8)
    class UBorder* status_border;                                                     // 0x02E0 (size: 0x8)
    class UImage* status_img;                                                         // 0x02E8 (size: 0x8)
    class UImage* thumb;                                                              // 0x02F0 (size: 0x8)
    bool IsEmpty;                                                                     // 0x02F8 (size: 0x1)
    class UMainUICPP_C* mainUIRef;                                                    // 0x0300 (size: 0x8)
    int32 squadID;                                                                    // 0x0308 (size: 0x4)
    bool isSelected;                                                                  // 0x030C (size: 0x1)
    bool bIsHovered;                                                                  // 0x030D (size: 0x1)
    FText Name;                                                                       // 0x0310 (size: 0x18)
    float deltaT;                                                                     // 0x0328 (size: 0x4)
    float lastPressed;                                                                // 0x032C (size: 0x4)
    float doubleClickThres;                                                           // 0x0330 (size: 0x4)
    class AMyPawnCPP_BP3_C* playerRef;                                                // 0x0338 (size: 0x8)
    TArray<int32> ctrlGroups;                                                         // 0x0340 (size: 0x10)

    void appendControlGroupTxt(FString& groupTxt1);
    void setStatusIcon(class UTexture2D* Texture, ESlateVisibility InVisibility);
    bool isSquadSelectable(ESquadControl Control);
    void selectUnit(class AMyPawnCPP_BP3_C* pawnRef);
    void BndEvt__Button_29_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__Button_29_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void RMB();
    void updateSquadDetails();
    void ExecuteUbergraph_unitCard(int32 EntryPoint);
}; // Size: 0x350

#endif
