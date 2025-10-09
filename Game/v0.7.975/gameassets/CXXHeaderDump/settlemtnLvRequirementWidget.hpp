#ifndef UE4SS_SDK_settlemtnLvRequirementWidget_HPP
#define UE4SS_SDK_settlemtnLvRequirementWidget_HPP

class UsettlemtnLvRequirementWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_113;                                                          // 0x0268 (size: 0x8)
    class UTextBlock* TextBlock_11;                                                   // 0x0270 (size: 0x8)
    FText requirementTxt;                                                             // 0x0278 (size: 0x18)
    bool fulfilled;                                                                   // 0x0290 (size: 0x1)

    void Construct();
    void ExecuteUbergraph_settlemtnLvRequirementWidget(int32 EntryPoint);
}; // Size: 0x291

#endif
