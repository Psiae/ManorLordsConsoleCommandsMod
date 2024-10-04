#ifndef UE4SS_SDK_blackTransition_HPP
#define UE4SS_SDK_blackTransition_HPP

class UblackTransition_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* NewAnimation;                                             // 0x02E8 (size: 0x8)
    class UBorder* FadeIn;                                                            // 0x02F0 (size: 0x8)

    void Construct();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void ExecuteUbergraph_blackTransition(int32 EntryPoint);
}; // Size: 0x2F8

#endif
