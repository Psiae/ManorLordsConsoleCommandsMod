#ifndef UE4SS_SDK_blackTransition_HPP
#define UE4SS_SDK_blackTransition_HPP

class UblackTransition_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* NewAnimation;                                             // 0x0268 (size: 0x8)
    class UBorder* FadeIn;                                                            // 0x0270 (size: 0x8)

    void Construct();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void ExecuteUbergraph_blackTransition(int32 EntryPoint);
}; // Size: 0x278

#endif
