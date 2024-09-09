#ifndef UE4SS_SDK_poor_alert_HPP
#define UE4SS_SDK_poor_alert_HPP

class Upoor_alert_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* anim;                                                     // 0x02E8 (size: 0x8)
    class UImage* Image;                                                              // 0x02F0 (size: 0x8)
    class UImage* Image_45;                                                           // 0x02F8 (size: 0x8)
    class UTextBlock* TextBlock_39;                                                   // 0x0300 (size: 0x8)
    FText Text;                                                                       // 0x0308 (size: 0x10)

    void Construct();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void ExecuteUbergraph_poor_alert(int32 EntryPoint);
}; // Size: 0x318

#endif
