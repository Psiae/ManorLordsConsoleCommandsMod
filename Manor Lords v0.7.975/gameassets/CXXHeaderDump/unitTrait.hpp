#ifndef UE4SS_SDK_unitTrait_HPP
#define UE4SS_SDK_unitTrait_HPP

class UunitTrait_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image;                                                              // 0x0268 (size: 0x8)
    class UTextBlock* name_txt_1;                                                     // 0x0270 (size: 0x8)
    class UTexture2D* Icon;                                                           // 0x0278 (size: 0x8)
    FName name_key;                                                                   // 0x0280 (size: 0x8)
    EUnitTrait traitType;                                                             // 0x0288 (size: 0x1)
    class ASMUnit* unit;                                                              // 0x0290 (size: 0x8)

    void updateVisibility();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_unitTrait(int32 EntryPoint);
}; // Size: 0x298

#endif
