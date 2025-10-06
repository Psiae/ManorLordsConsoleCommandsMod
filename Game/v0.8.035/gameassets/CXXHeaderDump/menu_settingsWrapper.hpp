#ifndef UE4SS_SDK_menu_settingsWrapper_HPP
#define UE4SS_SDK_menu_settingsWrapper_HPP

class Umenu_settingsWrapper_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UWidgetAnimation* lerpIn;                                                   // 0x02D8 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02E0 (size: 0x8)
    class UImage* Image_3;                                                            // 0x02E8 (size: 0x8)
    class UImage* Image_136;                                                          // 0x02F0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_0;                                  // 0x02F8 (size: 0x8)
    class UquickSettings_C* quickSettings;                                            // 0x0300 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_menu_settingsWrapper(int32 EntryPoint);
}; // Size: 0x308

#endif
