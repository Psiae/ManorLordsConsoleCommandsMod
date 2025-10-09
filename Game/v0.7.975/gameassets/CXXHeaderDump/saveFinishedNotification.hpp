#ifndef UE4SS_SDK_saveFinishedNotification_HPP
#define UE4SS_SDK_saveFinishedNotification_HPP

class UsaveFinishedNotification_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* anim;                                                     // 0x0268 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x0270 (size: 0x8)
    FsaveFinishedNotification_CGoBackToPreviousResolution goBackToPreviousResolution; // 0x0278 (size: 0x10)
    void goBackToPreviousResolution();

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Remove();
    void ExecuteUbergraph_saveFinishedNotification(int32 EntryPoint);
    void goBackToPreviousResolution__DelegateSignature();
}; // Size: 0x288

#endif
