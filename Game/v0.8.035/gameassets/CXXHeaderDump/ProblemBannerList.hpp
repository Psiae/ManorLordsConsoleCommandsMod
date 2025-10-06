#ifndef UE4SS_SDK_ProblemBannerList_HPP
#define UE4SS_SDK_ProblemBannerList_HPP

class UProblemBannerList_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UproblemBanner_C* notif_can_find_resource;                                  // 0x0350 (size: 0x8)
    class UproblemBanner_C* notif_cold;                                               // 0x0358 (size: 0x8)
    class UproblemBanner_C* notif_home;                                               // 0x0360 (size: 0x8)
    class UproblemBanner_C* notif_home_1;                                             // 0x0368 (size: 0x8)
    class UproblemBanner_C* notif_hung;                                               // 0x0370 (size: 0x8)
    class UproblemBanner_C* notif_hung_1;                                             // 0x0378 (size: 0x8)
    class UproblemBanner_C* notif_hung_2;                                             // 0x0380 (size: 0x8)
    class UproblemBanner_C* notif_hung_3;                                             // 0x0388 (size: 0x8)
    class UproblemBanner_C* notif_spoil;                                              // 0x0390 (size: 0x8)
    class UproblemBanner_C* notif_spoil_1;                                            // 0x0398 (size: 0x8)
    class UproblemBanner_C* notif_spoil_3;                                            // 0x03A0 (size: 0x8)
    class UproblemBanner_C* notif_spoil_4;                                            // 0x03A8 (size: 0x8)
    class UproblemBanner_C* notif_spoil_5;                                            // 0x03B0 (size: 0x8)
    class UproblemBanner_C* notif_spoil_6;                                            // 0x03B8 (size: 0x8)
    class UproblemBanner_C* notif_spoil_8;                                            // 0x03C0 (size: 0x8)
    class UproblemBanner_C* notif_spoil_9;                                            // 0x03C8 (size: 0x8)
    class UproblemBanner_C* notif_spoil_10;                                           // 0x03D0 (size: 0x8)
    class UproblemBanner_C* notif_spoil_11;                                           // 0x03D8 (size: 0x8)
    class UproblemBanner_C* notif_spoil_12;                                           // 0x03E0 (size: 0x8)
    class UproblemBanner_C* notif_spoil_13;                                           // 0x03E8 (size: 0x8)
    class UproblemBanner_C* notif_spoil_14;                                           // 0x03F0 (size: 0x8)
    class UproblemBanner_C* notif_spoil_15;                                           // 0x03F8 (size: 0x8)
    class UproblemBanner_C* notif_spoil_16;                                           // 0x0400 (size: 0x8)
    class UproblemBanner_C* notif_spoil_17;                                           // 0x0408 (size: 0x8)
    class UproblemBanner_C* notif_spoil_18;                                           // 0x0410 (size: 0x8)
    class UproblemBanner_C* notif_spoil_19;                                           // 0x0418 (size: 0x8)
    class UproblemBanner_C* notif_spoil_21;                                           // 0x0420 (size: 0x8)
    class UproblemBanner_C* notif_spoil_22;                                           // 0x0428 (size: 0x8)
    class UproblemBanner_C* notif_storage;                                            // 0x0430 (size: 0x8)
    class UproblemBanner_C* notif_storage_1;                                          // 0x0438 (size: 0x8)
    class UproblemBanner_C* notif_storage_2;                                          // 0x0440 (size: 0x8)
    class UproblemBanner_C* notif_storage_3;                                          // 0x0448 (size: 0x8)
    class UproblemBanner_C* notif_unmaintained;                                       // 0x0450 (size: 0x8)
    class UHorizontalBox* problems_HB;                                                // 0x0458 (size: 0x8)
    bool resourceBar_ShowSurplus;                                                     // 0x0460 (size: 0x1)

    void Update Problem Banner Count and Visibility(class ARegion* Region, bool& AtleastOneBannerVisible, bool& BannersDidChange);
    FNaviSubGridLayout ComputeSubGridLayout();
    void updateProblemCount(int32& Num, class UWidget*& problemWidget, class UTextBlock*& countText);
    void SequenceEvent_1(class UComboBoxString* Target);
    void updateProblemBannerList(class ARegion* Region);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_ProblemBannerList(int32 EntryPoint);
}; // Size: 0x461

#endif
