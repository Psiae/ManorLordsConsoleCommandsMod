#ifndef UE4SS_SDK_wiki_nonClickableText_HPP
#define UE4SS_SDK_wiki_nonClickableText_HPP

class Uwiki_nonClickableText_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class URichTextBlock* subject_main_descr;                                         // 0x02E8 (size: 0x8)
    FText Text;                                                                       // 0x02F0 (size: 0x10)

    void Construct();
    void ExecuteUbergraph_wiki_nonClickableText(int32 EntryPoint);
}; // Size: 0x300

#endif
