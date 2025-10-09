#ifndef UE4SS_SDK_portraitSelection_HPP
#define UE4SS_SDK_portraitSelection_HPP

class UportraitSelection_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_76;                                                           // 0x0268 (size: 0x8)
    class UImage* Image_126;                                                          // 0x0270 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x0278 (size: 0x8)
    class UportraitItem_C* portraitItem;                                              // 0x0280 (size: 0x8)
    class UportraitItem_C* portraitItem_1;                                            // 0x0288 (size: 0x8)
    class UportraitItem_C* portraitItem_2;                                            // 0x0290 (size: 0x8)
    class UportraitItem_C* portraitItem_3;                                            // 0x0298 (size: 0x8)
    class UportraitItem_C* portraitItem_4;                                            // 0x02A0 (size: 0x8)
    class UportraitItem_C* portraitItem_5;                                            // 0x02A8 (size: 0x8)
    class UportraitItem_C* portraitItem_6;                                            // 0x02B0 (size: 0x8)
    class UportraitItem_C* portraitItem_7;                                            // 0x02B8 (size: 0x8)
    class UportraitItem_C* portraitItem_8;                                            // 0x02C0 (size: 0x8)
    class UImage* selected_img;                                                       // 0x02C8 (size: 0x8)
    class UWrapBox* WrapBox_39;                                                       // 0x02D0 (size: 0x8)
    FportraitSelection_CPortraitChanged portraitChanged;                              // 0x02D8 (size: 0x10)
    void portraitChanged(bool isFemale);

    void Construct();
    void updatePortraitChanged(class UTexture2D* newTexture, bool isFemale);
    void ExecuteUbergraph_portraitSelection(int32 EntryPoint);
    void portraitChanged__DelegateSignature(bool isFemale);
}; // Size: 0x2E8

#endif
