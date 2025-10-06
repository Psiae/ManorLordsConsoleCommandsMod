#ifndef UE4SS_SDK_unitTrait_HPP
#define UE4SS_SDK_unitTrait_HPP

class UunitTrait_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UImage* Image;                                                              // 0x02D8 (size: 0x8)
    class UTextBlock* name_txt_1;                                                     // 0x02E0 (size: 0x8)
    class UTexture2D* Icon;                                                           // 0x02E8 (size: 0x8)
    FName name_key;                                                                   // 0x02F0 (size: 0x8)
    EUnitTrait traitType;                                                             // 0x02F8 (size: 0x1)
    class ASMUnit* unit;                                                              // 0x0300 (size: 0x8)

    void updateVisibility();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_unitTrait(int32 EntryPoint);
}; // Size: 0x308

#endif
