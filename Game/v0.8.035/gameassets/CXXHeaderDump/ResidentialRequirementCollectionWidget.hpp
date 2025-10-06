#ifndef UE4SS_SDK_ResidentialRequirementCollectionWidget_HPP
#define UE4SS_SDK_ResidentialRequirementCollectionWidget_HPP

class UResidentialRequirementCollectionWidget_C : public UUserWidget
{
    class UVerticalBox* ItemCategories_Container_1;                                   // 0x02D0 (size: 0x8)
    class UHorizontalBox* Pips_HB;                                                    // 0x02D8 (size: 0x8)
    class URequirementRatingSimplePip_C* RequirementRatingSimplePip;                  // 0x02E0 (size: 0x8)
    class URequirementRatingSimplePip_C* RequirementRatingSimplePip_1;                // 0x02E8 (size: 0x8)
    class UResidentialRequirementCollectionItemSubcategory_C* ResidentialRequirementCollectionItemSubcategory; // 0x02F0 (size: 0x8)
    class USimpleFrameWidgetA_C* SimpleFrameWidgetA;                                  // 0x02F8 (size: 0x8)
    class USizeBox* SizeBox_1;                                                        // 0x0300 (size: 0x8)

    void BuildingSuppliedFrom(const FRequirementCollection InCollection, FString& SuppliedFromString);
    FString BuildMissingTypesText(TArray<EItemSubcategory>& Array);
    void UpdateCollectionContents(TArray<int32>& SuppliedTypes, FResidentialRequirement ResidentialRequirementData, int32 TriggeringLevel);
}; // Size: 0x308

#endif
