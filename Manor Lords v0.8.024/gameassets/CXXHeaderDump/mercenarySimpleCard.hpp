#ifndef UE4SS_SDK_mercenarySimpleCard_HPP
#define UE4SS_SDK_mercenarySimpleCard_HPP

class UmercenarySimpleCard_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UOverlay* cardOverlay;                                                      // 0x02E8 (size: 0x8)
    class UImage* cardTexture;                                                        // 0x02F0 (size: 0x8)
    FName unitTemp;                                                                   // 0x02F8 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_mercenarySimpleCard(int32 EntryPoint);
}; // Size: 0x300

#endif
