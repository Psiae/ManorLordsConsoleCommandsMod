#ifndef UE4SS_SDK_playerLordsPanel_HPP
#define UE4SS_SDK_playerLordsPanel_HPP

class UplayerLordsPanel_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    class UImage* circleBg;                                                           // 0x0358 (size: 0x8)
    class UImage* CoatOfArms;                                                         // 0x0360 (size: 0x8)
    class UOverlay* favour_parent;                                                    // 0x0368 (size: 0x8)
    class UTextBlock* favour_txt;                                                     // 0x0370 (size: 0x8)
    class UImage* grey_blur;                                                          // 0x0378 (size: 0x8)
    class UImage* Image;                                                              // 0x0380 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0388 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0390 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0398 (size: 0x8)
    class UImage* Image_5;                                                            // 0x03A0 (size: 0x8)
    class UImage* Image_47;                                                           // 0x03A8 (size: 0x8)
    class UImage* Image_85;                                                           // 0x03B0 (size: 0x8)
    class UImage* Image_356;                                                          // 0x03B8 (size: 0x8)
    class UTextBlock* income_txt;                                                     // 0x03C0 (size: 0x8)
    class UOverlay* influence_parent;                                                 // 0x03C8 (size: 0x8)
    class UTextBlock* influence_txt;                                                  // 0x03D0 (size: 0x8)
    class UImage* lordPortraitIMG_1;                                                  // 0x03D8 (size: 0x8)
    class USizeBox* lordStats_SizeBox_0;                                              // 0x03E0 (size: 0x8)
    class UMD_NaviAutoTooltip_C* navi_favour;                                         // 0x03E8 (size: 0x8)
    class UMD_NaviAutoTooltip_C* navi_influence;                                      // 0x03F0 (size: 0x8)
    class UMD_NaviAutoButton_C* navi_problem;                                         // 0x03F8 (size: 0x8)
    class UMD_NaviAutoTooltip_C* navi_royalTax;                                       // 0x0400 (size: 0x8)
    class UMD_NaviAutoTooltip_C* navi_treasury;                                       // 0x0408 (size: 0x8)
    class UMD_NaviAutoButton_C* navi_walkMode;                                        // 0x0410 (size: 0x8)
    class UButton* playerLordButton;                                                  // 0x0418 (size: 0x8)
    class UImage* portraitHighlight;                                                  // 0x0420 (size: 0x8)
    class UBorder* problem_notEoughTreasury;                                          // 0x0428 (size: 0x8)
    class UTextBlock* royalTax_txt;                                                   // 0x0430 (size: 0x8)
    class UOverlay* taxesRoyal_parent;                                                // 0x0438 (size: 0x8)
    class UHorizontalBox* treasury_hb;                                                // 0x0440 (size: 0x8)
    class UOverlay* treasury_parent;                                                  // 0x0448 (size: 0x8)
    class UTextBlock* tresury_txt;                                                    // 0x0450 (size: 0x8)
    class UButton* walkaround_button;                                                 // 0x0458 (size: 0x8)
    class UMaterialInstanceDynamic* dynamicPortraitMat;                               // 0x0460 (size: 0x8)
    FplayerLordsPanel_CEnableVisitModeSmooth enableVisitModeSmooth;                   // 0x0468 (size: 0x10)
    void enableVisitModeSmooth();

    FNaviSubGridLayout ComputeSubGridLayout();
    void Update Player Coatof Arms And Player Portrait();
    void getPlayerPortrait(class UTexture2D*& Output);
    void updatePlayerStats();
    void BndEvt__playerLordsPanel_Button_621_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void Translate();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void BndEvt__playerLordsPanel_playerLordButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_playerLordsPanel(int32 EntryPoint);
    void enableVisitModeSmooth__DelegateSignature();
}; // Size: 0x478

#endif
