#ifndef UE4SS_SDK_RegionDropdown_HPP
#define UE4SS_SDK_RegionDropdown_HPP

class URegionDropdown_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UComboBoxString* RegionComboBox;                                            // 0x02E8 (size: 0x8)
    bool commandedOnly;                                                               // 0x02F0 (size: 0x1)
    class ARegion* selectedRegion;                                                    // 0x02F8 (size: 0x8)
    class UunitEditor_C* unitEditor;                                                  // 0x0300 (size: 0x8)

    void Construct();
    void addOptions();
    void ExecuteUbergraph_RegionDropdown(int32 EntryPoint);
}; // Size: 0x308

#endif
