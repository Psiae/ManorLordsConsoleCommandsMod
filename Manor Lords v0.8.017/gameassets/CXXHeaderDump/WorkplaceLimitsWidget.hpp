#ifndef UE4SS_SDK_WorkplaceLimitsWidget_HPP
#define UE4SS_SDK_WorkplaceLimitsWidget_HPP

class UWorkplaceLimitsWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* help_button_consumption;                                           // 0x02E8 (size: 0x8)
    class UButton* help_button_productionLimit;                                       // 0x02F0 (size: 0x8)
    class UImage* help_img_consumption;                                               // 0x02F8 (size: 0x8)
    class UImage* help_img_production;                                                // 0x0300 (size: 0x8)
    class UImage* img_category_line_1;                                                // 0x0308 (size: 0x8)
    class UImage* img_category_line_2;                                                // 0x0310 (size: 0x8)
    class UVerticalBox* productionLimit_VB;                                           // 0x0318 (size: 0x8)
    class UlocalizedTextBox_C* textBox_consumption;                                   // 0x0320 (size: 0x8)
    class UlocalizedTextBox_C* textBox_productionLimit;                               // 0x0328 (size: 0x8)
    class UVerticalBox* VB_ProdLimits;                                                // 0x0330 (size: 0x8)
    class UVerticalBox* VerticalBox_consumptionLimits;                                // 0x0338 (size: 0x8)
    class UVerticalBox* VerticalBox_productionLimits;                                 // 0x0340 (size: 0x8)

    void respawnAllLimitEntries(class ASMBuildingMaster* building);
    void BndEvt__WorkplaceLimitsWidget_help_button_1_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void Construct();
    void BndEvt__WorkplaceLimitsWidget_help_button_productionLimit_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_WorkplaceLimitsWidget(int32 EntryPoint);
}; // Size: 0x348

#endif
