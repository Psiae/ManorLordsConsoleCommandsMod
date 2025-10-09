#ifndef UE4SS_SDK_coatsDynamic_HPP
#define UE4SS_SDK_coatsDynamic_HPP

class UcoatsDynamic_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Button_0;                                                          // 0x02E8 (size: 0x8)
    class UImage* coats_img;                                                          // 0x02F0 (size: 0x8)
    class APawnCPP* Pawn;                                                             // 0x02F8 (size: 0x8)
    class UMaterialInstanceDynamic* coatMat;                                          // 0x0300 (size: 0x8)

    void hoverAnim(double A);
    void updateContents();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void pressCoat();
    void Construct();
    void ExecuteUbergraph_coatsDynamic(int32 EntryPoint);
}; // Size: 0x308

#endif
