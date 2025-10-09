#ifndef UE4SS_SDK_logMeter_HPP
#define UE4SS_SDK_logMeter_HPP

class UlogMeter_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UgoodStat_C* goodStat_1;                                                    // 0x02E8 (size: 0x8)
    FlogMeter_CMouseEntered mouseEntered;                                             // 0x02F0 (size: 0x10)
    void mouseEntered();
    FlogMeter_CMouseLeft mouseLeft;                                                   // 0x0300 (size: 0x10)
    void mouseLeft();

    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_logMeter(int32 EntryPoint);
    void mouseLeft__DelegateSignature();
    void mouseEntered__DelegateSignature();
}; // Size: 0x310

#endif
