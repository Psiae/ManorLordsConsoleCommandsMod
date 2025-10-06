#ifndef UE4SS_SDK_ResidentialRequirementDynamicSupplyCategory_HPP
#define UE4SS_SDK_ResidentialRequirementDynamicSupplyCategory_HPP

class UResidentialRequirementDynamicSupplyCategory_C : public UUserWidget
{
    class UVerticalBox* Collections_VB;                                               // 0x02D0 (size: 0x8)
    class UResidentialRequirementCollectionWidget_C* ResidentialRequirementCollectionWidget; // 0x02D8 (size: 0x8)
    class UResidentialRequirementCollectionWidget_C* ResidentialRequirementCollectionWidget_1; // 0x02E0 (size: 0x8)
    class UImage* SupplyCategoryIcon_Image;                                           // 0x02E8 (size: 0x8)
    EResidentialRequirement SupplyCategory;                                           // 0x02F0 (size: 0x1)

    void SetSupplyCategory(const EResidentialRequirement InSupplyCategory);
    void UpdateRequirementData(TArray<FResidentialRequirement>& RequirementData, class ASMBuildingMaster* buildingMaster);
}; // Size: 0x2F1

#endif
