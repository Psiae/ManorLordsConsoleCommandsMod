#ifndef UE4SS_SDK_regionViewOverlay_HPP
#define UE4SS_SDK_regionViewOverlay_HPP

class UregionViewOverlay_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x0268 (size: 0x8)
    class UWidgetAnimation* fadeInDetails;                                            // 0x0270 (size: 0x8)
    class UImage* bar_top;                                                            // 0x0278 (size: 0x8)
    class UImage* bar_vororm;                                                         // 0x0280 (size: 0x8)
    class UImage* black_fade_1;                                                       // 0x0288 (size: 0x8)
    class UTextBlock* claim_cost;                                                     // 0x0290 (size: 0x8)
    class UButton* claim_favour;                                                      // 0x0298 (size: 0x8)
    class UButton* claim_inf;                                                         // 0x02A0 (size: 0x8)
    class UImage* claimIcon;                                                          // 0x02A8 (size: 0x8)
    class UImage* claimIcon_1;                                                        // 0x02B0 (size: 0x8)
    class UImage* claimIcon_2;                                                        // 0x02B8 (size: 0x8)
    class UImage* claimIcon_3;                                                        // 0x02C0 (size: 0x8)
    class UHorizontalBox* claimOptions_HB;                                            // 0x02C8 (size: 0x8)
    class UclaimProgress_C* claimProgress;                                            // 0x02D0 (size: 0x8)
    class UmenuButton_C* close_button_new;                                            // 0x02D8 (size: 0x8)
    class UBorder* confirm_border;                                                    // 0x02E0 (size: 0x8)
    class UCanvasPanel* confirm_canvas;                                               // 0x02E8 (size: 0x8)
    class UButton* confirm_no;                                                        // 0x02F0 (size: 0x8)
    class UButton* confirm_yes;                                                       // 0x02F8 (size: 0x8)
    class UImage* glow_1;                                                             // 0x0300 (size: 0x8)
    class UBorder* header_border;                                                     // 0x0308 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0310 (size: 0x8)
    class UImage* Image_38;                                                           // 0x0318 (size: 0x8)
    class UImage* Image_100;                                                          // 0x0320 (size: 0x8)
    class UImage* Image_101;                                                          // 0x0328 (size: 0x8)
    class UImage* Image_105;                                                          // 0x0330 (size: 0x8)
    class UImage* Image_122;                                                          // 0x0338 (size: 0x8)
    class UImage* Image_218;                                                          // 0x0340 (size: 0x8)
    class UImage* Image_450;                                                          // 0x0348 (size: 0x8)
    class UVerticalBox* leftPanel_VB;                                                 // 0x0350 (size: 0x8)
    class UletterCreator_C* letterCreator;                                            // 0x0358 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_0;                                  // 0x0360 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_1;                                  // 0x0368 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_2;                                  // 0x0370 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_3;                                  // 0x0378 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_4;                                  // 0x0380 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_5;                                  // 0x0388 (size: 0x8)
    class UOverlay* mark_att_Overlay_3;                                               // 0x0390 (size: 0x8)
    class UTextBlock* mark_att_txt;                                                   // 0x0398 (size: 0x8)
    class UImage* markAtt_circle;                                                     // 0x03A0 (size: 0x8)
    class UHorizontalBox* markAtt_HB;                                                 // 0x03A8 (size: 0x8)
    class UImage* overlayThingy;                                                      // 0x03B0 (size: 0x8)
    class UpawnButton_C* pawnButton;                                                  // 0x03B8 (size: 0x8)
    class UTextBlock* policyTime_txt_1;                                               // 0x03C0 (size: 0x8)
    class UHorizontalBox* portraits_HB;                                               // 0x03C8 (size: 0x8)
    class UVerticalBox* RegionDetails_VB;                                             // 0x03D0 (size: 0x8)
    class UBorder* regionDetailsBorder;                                               // 0x03D8 (size: 0x8)
    class UHorizontalBox* regionName_bar;                                             // 0x03E0 (size: 0x8)
    class UEditableText* regionName_Editable;                                         // 0x03E8 (size: 0x8)
    class UTextBlock* regionName_text;                                                // 0x03F0 (size: 0x8)
    class UImage* regionOwnerColorBanner;                                             // 0x03F8 (size: 0x8)
    class UVerticalBox* regionOwnership_VB;                                           // 0x0400 (size: 0x8)
    class UNamedSlot* tradeTargetsUI_C_1;                                             // 0x0408 (size: 0x8)
    class UImage* vignette;                                                           // 0x0410 (size: 0x8)
    class UButton* war_button;                                                        // 0x0418 (size: 0x8)
    class UTextBlock* war_cost;                                                       // 0x0420 (size: 0x8)
    class UlocalizedTextBox_C* you_own_this;                                          // 0x0428 (size: 0x8)
    class AMyPawnCPP_BP3_C* playerRef;                                                // 0x0430 (size: 0x8)
    class ARegion* selectedRegion;                                                    // 0x0438 (size: 0x8)
    bool selectedRegionIsClaimable;                                                   // 0x0440 (size: 0x1)
    bool canDeclareWar;                                                               // 0x0441 (size: 0x1)
    bool isBeingClaimed;                                                              // 0x0442 (size: 0x1)
    bool isOwned;                                                                     // 0x0443 (size: 0x1)
    FName confirmTag;                                                                 // 0x0444 (size: 0x8)
    TArray<class UpawnButton_C*> pawnPortraits;                                       // 0x0450 (size: 0x10)
    bool canAffordClaimWithInfluence;                                                 // 0x0460 (size: 0x1)
    float smoothLerpValue;                                                            // 0x0464 (size: 0x4)
    bool enemiesPresentInSelectedRegion;                                              // 0x0468 (size: 0x1)

    void updatePawnPortraits();
    void updateBannerColor();
    void updateOptionVisibility();
    void lerpInOut();
    void updateRegionDetails();
    void BndEvt__regionName_Editable_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__regionName_Editable_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__claim_button_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__Button_236_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__Button_135_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void BndEvt__war_button_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__claim_favour_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__regionViewOverlay_close_button_new_K2Node_ComponentBoundEvent_7_onReleased__DelegateSignature();
    void setupMapOverlays();
    void ExecuteUbergraph_regionViewOverlay(int32 EntryPoint);
}; // Size: 0x469

#endif
