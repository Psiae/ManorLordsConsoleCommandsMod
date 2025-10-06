#ifndef UE4SS_SDK_DynamicWidgetPooler_HPP
#define UE4SS_SDK_DynamicWidgetPooler_HPP

class UWidgetPoolSubsystem : public UWorldSubsystem
{

    void ReleaseFromPanel(class UPanelWidget* InOwner, const bool IncludeTooltips);
    class UUserWidget* GetOrCreateInstance(class UObject* WorldContext, TSubclassOf<class UUserWidget> WidgetType, class UWidget* Owner);
}; // Size: 0x90

#endif
