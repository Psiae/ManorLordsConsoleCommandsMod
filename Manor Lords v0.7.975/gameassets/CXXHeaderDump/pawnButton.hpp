#ifndef UE4SS_SDK_pawnButton_HPP
#define UE4SS_SDK_pawnButton_HPP

class UpawnButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UcoatsDynamic_C* coatsDynamicWidget;                                        // 0x0268 (size: 0x8)
    class UBorder* playerColorBorder;                                                 // 0x0270 (size: 0x8)
    class UImage* portrait_img;                                                       // 0x0278 (size: 0x8)
    class UButton* portraitButton;                                                    // 0x0280 (size: 0x8)
    class APawnCPP* Pawn;                                                             // 0x0288 (size: 0x8)
    class UregionViewOverlay_C* daddy;                                                // 0x0290 (size: 0x8)
    class UMaterialInstanceDynamic* coatMat;                                          // 0x0298 (size: 0x8)

    void translateNameAndSetTooltip(class APawnCPP* Pawn);
    void isRegionName(FString regionName, bool& isARegion);
    void Construct();
    void BndEvt__Button_7_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_pawnButton(int32 EntryPoint);
}; // Size: 0x2A0

#endif
