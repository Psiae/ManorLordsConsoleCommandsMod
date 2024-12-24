#ifndef UE4SS_SDK_RTSWidgetFunctions_HPP
#define UE4SS_SDK_RTSWidgetFunctions_HPP

class URTSWidgetFunctions_C : public UBlueprintFunctionLibrary
{

    void SetColorAndOpacityIfChanged(class UTextBlock* Text, FLinearColor NewColor, class UObject* __WorldContext);
    void SetTextIfChanged(class UTextBlock* textWidget, FText NewText, class UObject* __WorldContext);
    void openWikiSubject(FName translationKey, class UDataTable* TranslationDataTable, class UObject* __WorldContext);
    void getItemData(int32 ItemId, class UObject* __WorldContext, FItem& itemData);
    void updateBorderTexturePositionRenderThread_DEPREC(class UBorder* borderWidget, class UUserWidget* Widget, class UObject* __WorldContext);
    void setBorderTexturePosition_DEPREC_1FRAMELAG(class UBorder*& borderWidget, class UUserWidget* Widget, class UObject* __WorldContext);
    void translateSimpleMainUIText(class UTextBlock* Target, FName translationKey, bool TextToUpper, class UObject* __WorldContext);
    void translateSimpleMenuText(class UTextBlock* Target, FName translationKey, bool TextToUpper, class UObject* __WorldContext);
    FText getTranslatedTextFromDataTable(FName RowName, class UDataTable* DataTable, bool removeSubjectRedirectors, bool formatBr, class UObject* __WorldContext);
    void getLanguage(class UObject* __WorldContext, FName& settings_lang_txt);
    FText getTranslatedStoryText(FName RowName, class UObject* __WorldContext);
    void PlayUISoundLeveled(class USoundBase* Sound, double PitchMultiplier, double VolumeMultiplier, class UObject* __WorldContext);
    void animateHoverButton(double DeltaTime, class UWidget* widgetToScale, class UWidget* widgetIsHovered, class UObject* __WorldContext);
    void SetVisibilityBool(bool Visible, class UWidget* Target, bool visible is hitTestable, class UObject* __WorldContext);
    FText K-fy the number(int32 A, bool bAlwaysSign, class UObject* __WorldContext);
    void getSettlementLevelIcon(int32 settlementLevel, class UObject* __WorldContext, class UTexture2D*& NewParam1);
    void dayToDayofTheMonth(int32 dayOfTheYear, class UObject* __WorldContext, int32& day, int32& month);
    void daysToYearsMonthsDays(int32 Days, bool hideDaysIfMoreThanYear, class UObject* __WorldContext, FText& DisplayText);
    void commonGetBuildingMeshByID(int32 ID, class UObject* __WorldContext, TSoftObjectPtr<UStaticMesh>& Out Row Construction Mesh Asset);
    double SmoothStep(double A, double B, double X, class UObject* __WorldContext);
    void isRegionName(FString Name, const class UObject* WorldContextObject, class UObject* __WorldContext, bool& isRegion);
    void translateLordsName(FString name plus title, class UObject* __WorldContext, FText& translatedNameAndTitle);
    FText translateCompanyName(FName RowName, class UObject* __WorldContext);
    void isTranslationForKey(FString translatedString, FName keyToCheck, class UObject* __WorldContext, bool& keyMatched);
    void goodTranslationToGoodID(FString goodName, class UObject* __WorldContext, int32& ID);
    void playSubmenuSound(bool Open, class UObject* __WorldContext);
    void getAudioLevel(int32 audioCategory, class UObject* __WorldContext, double& audioLevel);
    void getCropIcon(ECropType cropID, class UObject* __WorldContext, class UTexture2D*& Icon);
    void getTranslatedText(FName RowName, TEnumAsByte<TranslationCategory::Type> TranslationDatabase, class UObject* __WorldContext, FText& TranslatedText);
    void getStockOfGood(TArray<FGood>& Inventory, int32 Type, class UObject* __WorldContext, int32& amt);
    void getLogIconBasedOnTag(FName Tag, class UObject* __WorldContext, class UTexture2D*& Icon);
    void playAlertBasedOnTag(FName Tag, class UObject* __WorldContext);
    void squadIconID_to_SquadIcon(int32 icon ID, class UObject* __WorldContext, class UTexture2D*& NewParam);
    void getBuildingBackgroundSound(int32 ID, class UObject* __WorldContext, class USoundBase*& NewParam);
    void playBuildingSnd(int32 ID, class UObject* __WorldContext);
    void playItemSound(int32 ID, bool bPickup, class UObject* __WorldContext);
    void slotFromGoodID(int32 goodID, class UObject* __WorldContext, TEnumAsByte<EquipmentSlot::Type>& itemSlot);
    void getItemIconFromID(int32 ID, class UObject* __WorldContext, class UTexture2D*& Texture, bool& isTransitionaryResource);
    void dealID to dealName(int32 ID, class UObject* __WorldContext, FString& Name);
    void dealName to dealID(FString dealName, class UObject* __WorldContext, int32& ID);
    void cropName to cropID(FString Name, class UObject* __WorldContext, int32& ID);
    void cropID to cropName(int32 ID, class UObject* __WorldContext, FString& Name);
}; // Size: 0x28

#endif
