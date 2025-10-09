#ifndef UE4SS_SDK_purposeIcon_HPP
#define UE4SS_SDK_purposeIcon_HPP

class UpurposeIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* iconImg;                                                            // 0x0268 (size: 0x8)
    class UTexture2D* Texture;                                                        // 0x0270 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_purposeIcon(int32 EntryPoint);
}; // Size: 0x278

#endif
