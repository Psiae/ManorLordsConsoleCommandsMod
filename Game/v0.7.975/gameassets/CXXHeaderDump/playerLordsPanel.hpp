#ifndef UE4SS_SDK_playerLordsPanel_HPP
#define UE4SS_SDK_playerLordsPanel_HPP

class UplayerLordsPanel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* circleBg;                                                           // 0x0268 (size: 0x8)
    class UImage* CoatOfArms;                                                         // 0x0270 (size: 0x8)
    class UHorizontalBox* favour_HB;                                                  // 0x0278 (size: 0x8)
    class UTextBlock* favour_txt;                                                     // 0x0280 (size: 0x8)
    class UImage* grey_blur;                                                          // 0x0288 (size: 0x8)
    class UImage* Image;                                                              // 0x0290 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0298 (size: 0x8)
    class UImage* Image_3;                                                            // 0x02A0 (size: 0x8)
    class UImage* Image_4;                                                            // 0x02A8 (size: 0x8)
    class UImage* Image_5;                                                            // 0x02B0 (size: 0x8)
    class UImage* Image_47;                                                           // 0x02B8 (size: 0x8)
    class UImage* Image_85;                                                           // 0x02C0 (size: 0x8)
    class UImage* Image_356;                                                          // 0x02C8 (size: 0x8)
    class UTextBlock* income_txt;                                                     // 0x02D0 (size: 0x8)
    class UHorizontalBox* influence_HB;                                               // 0x02D8 (size: 0x8)
    class UTextBlock* influence_txt;                                                  // 0x02E0 (size: 0x8)
    class UImage* lordPortraitIMG_1;                                                  // 0x02E8 (size: 0x8)
    class USizeBox* lordStats_SizeBox_0;                                              // 0x02F0 (size: 0x8)
    class UButton* playerLordButton;                                                  // 0x02F8 (size: 0x8)
    class UImage* portraitHighlight;                                                  // 0x0300 (size: 0x8)
    class UBorder* problem_notEoughTreasury;                                          // 0x0308 (size: 0x8)
    class UTextBlock* royalTax_txt;                                                   // 0x0310 (size: 0x8)
    class UHorizontalBox* taxesRoyal_HB;                                              // 0x0318 (size: 0x8)
    class UHorizontalBox* treasury_hb;                                                // 0x0320 (size: 0x8)
    class UTextBlock* tresury_txt;                                                    // 0x0328 (size: 0x8)
    class UButton* walkaround_button;                                                 // 0x0330 (size: 0x8)
    class UMaterialInstanceDynamic* dynamicPortraitMat;                               // 0x0338 (size: 0x8)
    FplayerLordsPanel_CEnableVisitModeSmooth enableVisitModeSmooth;                   // 0x0340 (size: 0x10)
    void enableVisitModeSmooth();

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
}; // Size: 0x350

#endif
