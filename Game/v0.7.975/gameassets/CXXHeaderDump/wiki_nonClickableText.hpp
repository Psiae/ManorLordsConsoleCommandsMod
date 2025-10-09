#ifndef UE4SS_SDK_wiki_nonClickableText_HPP
#define UE4SS_SDK_wiki_nonClickableText_HPP

class Uwiki_nonClickableText_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class URichTextBlock* subject_main_descr;                                         // 0x0268 (size: 0x8)
    FText Text;                                                                       // 0x0270 (size: 0x18)

    void Construct();
    void ExecuteUbergraph_wiki_nonClickableText(int32 EntryPoint);
}; // Size: 0x288

#endif
