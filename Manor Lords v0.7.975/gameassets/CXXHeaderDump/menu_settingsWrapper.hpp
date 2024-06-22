#ifndef UE4SS_SDK_menu_settingsWrapper_HPP
#define UE4SS_SDK_menu_settingsWrapper_HPP

class Umenu_settingsWrapper_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* lerpIn;                                                   // 0x0268 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0270 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0278 (size: 0x8)
    class UImage* Image_136;                                                          // 0x0280 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_0;                                  // 0x0288 (size: 0x8)
    class UquickSettings_C* quickSettings;                                            // 0x0290 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_menu_settingsWrapper(int32 EntryPoint);
}; // Size: 0x298

#endif
