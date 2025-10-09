#ifndef UE4SS_SDK_poor_alert_HPP
#define UE4SS_SDK_poor_alert_HPP

class Upoor_alert_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* anim;                                                     // 0x0268 (size: 0x8)
    class UImage* Image;                                                              // 0x0270 (size: 0x8)
    class UImage* Image_45;                                                           // 0x0278 (size: 0x8)
    class UTextBlock* TextBlock_39;                                                   // 0x0280 (size: 0x8)
    FText Text;                                                                       // 0x0288 (size: 0x18)

    void Construct();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void ExecuteUbergraph_poor_alert(int32 EntryPoint);
}; // Size: 0x2A0

#endif
