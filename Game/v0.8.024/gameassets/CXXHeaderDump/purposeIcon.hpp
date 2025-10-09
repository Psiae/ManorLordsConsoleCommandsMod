#ifndef UE4SS_SDK_purposeIcon_HPP
#define UE4SS_SDK_purposeIcon_HPP

class UpurposeIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* iconImg;                                                            // 0x02E8 (size: 0x8)
    class UTexture2D* Texture;                                                        // 0x02F0 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_purposeIcon(int32 EntryPoint);
}; // Size: 0x2F8

#endif
