#ifndef UE4SS_SDK_coatOfArms_HPP
#define UE4SS_SDK_coatOfArms_HPP

class UcoatOfArms_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UImage* coatOfArms;                                                         // 0x02D8 (size: 0x8)
    int32 Pawn Index;                                                                 // 0x02E0 (size: 0x4)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_coatOfArms(int32 EntryPoint);
}; // Size: 0x2E4

#endif
