#ifndef UE4SS_SDK_castleFloater_HPP
#define UE4SS_SDK_castleFloater_HPP

class UcastleFloater_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UImage* bldType;                                                            // 0x02D8 (size: 0x8)
    class UHorizontalBox* buildingCost_HB;                                            // 0x02E0 (size: 0x8)
    class UButton* Button_demo;                                                       // 0x02E8 (size: 0x8)
    class UButton* Button_flip;                                                       // 0x02F0 (size: 0x8)
    class UButton* Button_levelDown;                                                  // 0x02F8 (size: 0x8)
    class UButton* Button_levelUp;                                                    // 0x0300 (size: 0x8)
    class UImage* Image;                                                              // 0x0308 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0310 (size: 0x8)
    class UImage* Image_221;                                                          // 0x0318 (size: 0x8)
    class UImage* Image_308;                                                          // 0x0320 (size: 0x8)
    class UTextBlock* lvTxt;                                                          // 0x0328 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton;                                    // 0x0330 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton_1;                                  // 0x0338 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton_2;                                  // 0x0340 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton_116;                                // 0x0348 (size: 0x8)
    class UNamedSlot* platformLevelSlot;                                              // 0x0350 (size: 0x8)
    class UImage* spacerImg;                                                          // 0x0358 (size: 0x8)
    class AActor* Actor;                                                              // 0x0360 (size: 0x8)

    void listConstructionGoods(class ASMBuildingMaster* building, TArray<FGood>& Array);
    void changePlatformLevel(int32 change);
    void setIconImageToBuildingType();
    void changeUpgradeLevel(int32 levelChange);
    void UpdateContents();
    FVector2D scaleByDPI_IThink(FVector2D A);
    void updatePositionInViewport();
    void Construct();
    void BndEvt__castleFloater_Button_1_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__castleFloater_Button_0_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__castleFloater_Button_demo_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__castleFloater_Button_flip_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_castleFloater(int32 EntryPoint);
}; // Size: 0x368

#endif
