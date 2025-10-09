#ifndef UE4SS_SDK_pawnButton_HPP
#define UE4SS_SDK_pawnButton_HPP

class UpawnButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UcoatsDynamic_C* coatsDynamicWidget;                                        // 0x02E8 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton;                                    // 0x02F0 (size: 0x8)
    class UBorder* playerColorBorder;                                                 // 0x02F8 (size: 0x8)
    class UImage* portrait_img;                                                       // 0x0300 (size: 0x8)
    class UButton* portraitButton;                                                    // 0x0308 (size: 0x8)
    class APawnCPP* Pawn;                                                             // 0x0310 (size: 0x8)
    class UregionViewOverlay_C* Daddy;                                                // 0x0318 (size: 0x8)
    class UMaterialInstanceDynamic* coatMat;                                          // 0x0320 (size: 0x8)

    void translateNameAndSetTooltip(class APawnCPP* Pawn);
    void isRegionName(FString regionName, bool& isARegion);
    void Construct();
    void BndEvt__Button_7_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_pawnButton(int32 EntryPoint);
}; // Size: 0x328

#endif
