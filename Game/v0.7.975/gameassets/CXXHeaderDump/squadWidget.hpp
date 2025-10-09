#ifndef UE4SS_SDK_squadWidget_HPP
#define UE4SS_SDK_squadWidget_HPP

class UsquadWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_21;                                                           // 0x0268 (size: 0x8)
    int32 squadID;                                                                    // 0x0270 (size: 0x4)
    class APawnCPP* playerRef;                                                        // 0x0278 (size: 0x8)

    void updatePosition();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_squadWidget(int32 EntryPoint);
}; // Size: 0x280

#endif
