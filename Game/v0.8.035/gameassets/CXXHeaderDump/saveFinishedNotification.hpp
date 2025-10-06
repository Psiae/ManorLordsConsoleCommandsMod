#ifndef UE4SS_SDK_saveFinishedNotification_HPP
#define UE4SS_SDK_saveFinishedNotification_HPP

class UsaveFinishedNotification_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UWidgetAnimation* anim;                                                     // 0x02D8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x02E0 (size: 0x8)
    FsaveFinishedNotification_CGoBackToPreviousResolution goBackToPreviousResolution; // 0x02E8 (size: 0x10)
    void goBackToPreviousResolution();

    void Remove();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_saveFinishedNotification(int32 EntryPoint);
    void goBackToPreviousResolution__DelegateSignature();
}; // Size: 0x2F8

#endif
