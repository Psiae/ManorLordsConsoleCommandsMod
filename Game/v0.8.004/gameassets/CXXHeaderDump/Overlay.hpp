#ifndef UE4SS_SDK_Overlay_HPP
#define UE4SS_SDK_Overlay_HPP

struct FOverlayItem
{
    FTimespan StartTime;                                                              // 0x0000 (size: 0x8)
    FTimespan EndTime;                                                                // 0x0008 (size: 0x8)
    FString Text;                                                                     // 0x0010 (size: 0x10)
    FVector2D Position;                                                               // 0x0020 (size: 0x10)

}; // Size: 0x30

class UBasicOverlays : public UOverlays
{
    TArray<FOverlayItem> Overlays;                                                    // 0x0028 (size: 0x10)

}; // Size: 0x38

class ULocalizedOverlays : public UOverlays
{
    class UBasicOverlays* DefaultOverlays;                                            // 0x0028 (size: 0x8)
    TMap<class FString, class UBasicOverlays*> LocaleToOverlaysMap;                   // 0x0030 (size: 0x50)

}; // Size: 0x80

class UOverlays : public UObject
{
}; // Size: 0x28

#endif
