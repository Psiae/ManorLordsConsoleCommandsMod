#ifndef UE4SS_SDK_mapSelectionEntry_HPP
#define UE4SS_SDK_mapSelectionEntry_HPP

class UmapSelectionEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* lerpIn;                                                   // 0x02E8 (size: 0x8)
    class UTextBlock* TextBlock_10;                                                   // 0x02F0 (size: 0x8)
    FName mapName;                                                                    // 0x02F8 (size: 0x8)

    void playOpenAnimation();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_mapSelectionEntry(int32 EntryPoint);
}; // Size: 0x300

#endif
