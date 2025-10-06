#ifndef UE4SS_SDK_BigTooltip_MapPreview_HPP
#define UE4SS_SDK_BigTooltip_MapPreview_HPP

class UBigTooltip_MapPreview_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x02D8 (size: 0x8)
    class UImage* BorderExterior;                                                     // 0x02E0 (size: 0x8)
    class UImage* BorderInterior;                                                     // 0x02E8 (size: 0x8)
    class UImage* Decor_Bottom;                                                       // 0x02F0 (size: 0x8)
    class UImage* Decor_Top;                                                          // 0x02F8 (size: 0x8)
    class URichTextBlock* descr_RichTxt;                                              // 0x0300 (size: 0x8)
    class UImage* mapThumb;                                                           // 0x0308 (size: 0x8)
    class UTextBlock* name_txt;                                                       // 0x0310 (size: 0x8)
    class UImage* PointerDecor_Img;                                                   // 0x0318 (size: 0x8)
    FName mapName;                                                                    // 0x0320 (size: 0x8)
    TSoftObjectPtr<UTexture2D> Soft Texture;                                          // 0x0328 (size: 0x28)

    void OnLoaded_75497F9B40AC316BF94167AAC455E7EA(class UObject* Loaded);
    void Construct();
    void ExecuteUbergraph_BigTooltip_MapPreview(int32 EntryPoint);
}; // Size: 0x350

#endif
