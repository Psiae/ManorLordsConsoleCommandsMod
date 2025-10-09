#ifndef UE4SS_SDK_retinueHead_HPP
#define UE4SS_SDK_retinueHead_HPP

class UretinueHead_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_0;                                                          // 0x0268 (size: 0x8)
    class UImage* icon_img;                                                           // 0x0270 (size: 0x8)
    class UImage* selectedImg;                                                        // 0x0278 (size: 0x8)
    class ASMUnit* unitRef;                                                           // 0x0280 (size: 0x8)
    bool Selected;                                                                    // 0x0288 (size: 0x1)
    FretinueHead_COnHeadClicked OnHeadClicked;                                        // 0x0290 (size: 0x10)
    void OnHeadClicked(class ASMUnit* newSelectedRetainer);

    void setIsSelected(bool Selected);
    void BndEvt__retinueHead_Button_0_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_retinueHead(int32 EntryPoint);
    void OnHeadClicked__DelegateSignature(class ASMUnit* newSelectedRetainer);
}; // Size: 0x2A0

#endif
