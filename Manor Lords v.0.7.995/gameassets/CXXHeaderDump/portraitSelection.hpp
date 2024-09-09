#ifndef UE4SS_SDK_portraitSelection_HPP
#define UE4SS_SDK_portraitSelection_HPP

class UportraitSelection_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Image_76;                                                           // 0x02E8 (size: 0x8)
    class UImage* Image_126;                                                          // 0x02F0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x02F8 (size: 0x8)
    class UportraitItem_C* portraitItem;                                              // 0x0300 (size: 0x8)
    class UportraitItem_C* portraitItem_1;                                            // 0x0308 (size: 0x8)
    class UportraitItem_C* portraitItem_2;                                            // 0x0310 (size: 0x8)
    class UportraitItem_C* portraitItem_3;                                            // 0x0318 (size: 0x8)
    class UportraitItem_C* portraitItem_4;                                            // 0x0320 (size: 0x8)
    class UportraitItem_C* portraitItem_5;                                            // 0x0328 (size: 0x8)
    class UportraitItem_C* portraitItem_6;                                            // 0x0330 (size: 0x8)
    class UportraitItem_C* portraitItem_7;                                            // 0x0338 (size: 0x8)
    class UportraitItem_C* portraitItem_8;                                            // 0x0340 (size: 0x8)
    class UportraitItem_C* portraitItem_9;                                            // 0x0348 (size: 0x8)
    class UportraitItem_C* portraitItem_10;                                           // 0x0350 (size: 0x8)
    class UportraitItem_C* portraitItem_11;                                           // 0x0358 (size: 0x8)
    class UImage* selected_img;                                                       // 0x0360 (size: 0x8)
    class UWrapBox* WrapBox_39;                                                       // 0x0368 (size: 0x8)
    FportraitSelection_CPortraitChanged portraitChanged;                              // 0x0370 (size: 0x10)
    void portraitChanged(bool isFemale);

    void Construct();
    void updatePortraitChanged(class UTexture2D* newTexture, bool isFemale);
    void ExecuteUbergraph_portraitSelection(int32 EntryPoint);
    void portraitChanged__DelegateSignature(bool isFemale);
}; // Size: 0x380

#endif
