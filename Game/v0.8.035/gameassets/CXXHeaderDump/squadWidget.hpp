#ifndef UE4SS_SDK_squadWidget_HPP
#define UE4SS_SDK_squadWidget_HPP

class UsquadWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UImage* Image_21;                                                           // 0x02D8 (size: 0x8)
    int32 squadID;                                                                    // 0x02E0 (size: 0x4)
    class APawnCPP* playerRef;                                                        // 0x02E8 (size: 0x8)

    void updatePosition();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_squadWidget(int32 EntryPoint);
}; // Size: 0x2F0

#endif
