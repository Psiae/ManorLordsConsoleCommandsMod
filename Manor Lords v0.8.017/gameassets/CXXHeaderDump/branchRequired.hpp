#ifndef UE4SS_SDK_branchRequired_HPP
#define UE4SS_SDK_branchRequired_HPP

class UbranchRequired_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Image_219;                                                          // 0x02E8 (size: 0x8)
    class UTextBlock* TextBlock_127;                                                  // 0x02F0 (size: 0x8)
    FTechRequirement requirement;                                                     // 0x02F8 (size: 0x10)
    bool redColored;                                                                  // 0x0308 (size: 0x1)

    void Construct();
    void ExecuteUbergraph_branchRequired(int32 EntryPoint);
}; // Size: 0x309

#endif
