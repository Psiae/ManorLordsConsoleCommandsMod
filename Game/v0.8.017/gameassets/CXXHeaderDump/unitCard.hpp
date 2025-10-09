#ifndef UE4SS_SDK_unitCard_HPP
#define UE4SS_SDK_unitCard_HPP

class UunitCard_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* Drag;                                                     // 0x02E8 (size: 0x8)
    class UWidgetAnimation* Open;                                                     // 0x02F0 (size: 0x8)
    class UImage* bar_img;                                                            // 0x02F8 (size: 0x8)
    class UBorder* ctrl_group;                                                        // 0x0300 (size: 0x8)
    class UTextBlock* ctrl_group_txt;                                                 // 0x0308 (size: 0x8)
    class UProgressBar* fatigue_ProgressBar;                                          // 0x0310 (size: 0x8)
    class UImage* gradientImg;                                                        // 0x0318 (size: 0x8)
    class UMD_NaviHijackProxy_C* MD_NaviHijackProxy;                                  // 0x0320 (size: 0x8)
    class UProgressBar* morale_ProgressBar_72;                                        // 0x0328 (size: 0x8)
    class UTextBlock* NUMBER_txt;                                                     // 0x0330 (size: 0x8)
    class UOverlay* Overlay_0;                                                        // 0x0338 (size: 0x8)
    class UProgressBar* ProgressBar_73;                                               // 0x0340 (size: 0x8)
    class UImage* selectedImg;                                                        // 0x0348 (size: 0x8)
    class USizeBox* SizeBox;                                                          // 0x0350 (size: 0x8)
    class UBorder* status_border;                                                     // 0x0358 (size: 0x8)
    class UImage* status_img;                                                         // 0x0360 (size: 0x8)
    class UImage* thumb;                                                              // 0x0368 (size: 0x8)
    bool IsEmpty;                                                                     // 0x0370 (size: 0x1)
    class UMainUICPP_C* mainUIref;                                                    // 0x0378 (size: 0x8)
    int32 squadID;                                                                    // 0x0380 (size: 0x4)
    bool IsSelected;                                                                  // 0x0384 (size: 0x1)
    bool bIsHovered;                                                                  // 0x0385 (size: 0x1)
    FText Name;                                                                       // 0x0388 (size: 0x10)
    double lastPressed;                                                               // 0x0398 (size: 0x8)
    double doubleClickThres;                                                          // 0x03A0 (size: 0x8)
    class AMyPawnCPP_BP3_C* playerRef;                                                // 0x03A8 (size: 0x8)
    TArray<int32> ctrlGroups;                                                         // 0x03B0 (size: 0x10)
    double TargetXPosition;                                                           // 0x03C0 (size: 0x8)
    double DragInterpSpeed;                                                           // 0x03C8 (size: 0x8)
    bool CanDrag;                                                                     // 0x03D0 (size: 0x1)
    FPointerEvent InputDown;                                                          // 0x03D8 (size: 0x78)

    void setIsDraggedWithAnimation(bool isDragged);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnPreviewMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    bool HasCardSize?();
    bool HasReachPosition?();
    void OnDragDetected(FGeometry MyGeometry, const FPointerEvent& PointerEvent, class UDragDropOperation*& Operation);
    void appendControlGroupTxt(FString& groupTxt1);
    void setStatusIcon(class UTexture2D* Texture, ESlateVisibility InVisibility);
    bool isSquadSelectable(ESquadControl Control);
    void selectUnit(class AMyPawnCPP_BP3_C* pawnRef);
    void RMB();
    void OnDragCancelled(const FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void updateSquadDetails();
    void pressUnitCard();
    void BndEvt__unitCard_MD_NaviHijackProxy_K2Node_ComponentBoundEvent_1_HijackedHandleInput__DelegateSignature(ENaviUiIntent intent);
    void OnDragEnter(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    void ExecuteUbergraph_unitCard(int32 EntryPoint);
}; // Size: 0x450

#endif
