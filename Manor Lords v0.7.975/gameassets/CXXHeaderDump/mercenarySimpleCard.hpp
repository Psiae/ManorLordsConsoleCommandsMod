#ifndef UE4SS_SDK_mercenarySimpleCard_HPP
#define UE4SS_SDK_mercenarySimpleCard_HPP

class UmercenarySimpleCard_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UOverlay* cardOverlay;                                                      // 0x0268 (size: 0x8)
    class UImage* cardTexture;                                                        // 0x0270 (size: 0x8)
    FName unitTemp;                                                                   // 0x0278 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_mercenarySimpleCard(int32 EntryPoint);
}; // Size: 0x280

#endif
