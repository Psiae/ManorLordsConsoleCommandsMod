#ifndef UE4SS_SDK_createNewSave_HPP
#define UE4SS_SDK_createNewSave_HPP

class UcreateNewSave_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x0350 (size: 0x8)
    class UTextBlock* header_txt;                                                     // 0x0358 (size: 0x8)
    class UImage* Image_155;                                                          // 0x0360 (size: 0x8)
    class UmenuButton_C* No;                                                          // 0x0368 (size: 0x8)
    class UEditableText* textField;                                                   // 0x0370 (size: 0x8)
    class UmenuButton_C* Yes;                                                         // 0x0378 (size: 0x8)
    class ARegion* Region;                                                            // 0x0380 (size: 0x8)
    class UMLSaveGameDescr* Save Data;                                                // 0x0388 (size: 0x8)
    FcreateNewSave_COnDecision onDecision;                                            // 0x0390 (size: 0x10)
    void onDecision(bool Save);
    FString DefaultName;                                                              // 0x03A0 (size: 0x10)

    FNaviSubGridLayout ComputeSubGridLayout();
    void SetupNewSaveWidget();
    void BndEvt__renameSave_yes_K2Node_ComponentBoundEvent_0_onReleased__DelegateSignature();
    void BndEvt__renameSave_no_K2Node_ComponentBoundEvent_1_onReleased__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_createNewSave(int32 EntryPoint);
    void onDecision__DelegateSignature(bool Save);
}; // Size: 0x3B0

#endif
