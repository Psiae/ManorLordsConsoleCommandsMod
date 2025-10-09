#ifndef UE4SS_SDK_reward_dev_HPP
#define UE4SS_SDK_reward_dev_HPP

class Ureward_dev_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* lvlUp;                                                    // 0x02E8 (size: 0x8)
    class UWidgetAnimation* fadeInAndOut;                                             // 0x02F0 (size: 0x8)
    class UTextBlock* Exp;                                                            // 0x02F8 (size: 0x8)
    class UImage* flare;                                                              // 0x0300 (size: 0x8)
    class UImage* lv_bg;                                                              // 0x0308 (size: 0x8)
    class UImage* lv_glow;                                                            // 0x0310 (size: 0x8)
    class UTextBlock* lv_txt;                                                         // 0x0318 (size: 0x8)
    class UProgressBar* ProgressBar_0;                                                // 0x0320 (size: 0x8)
    class UImage* spacera;                                                            // 0x0328 (size: 0x8)
    class UImage* spacera_1;                                                          // 0x0330 (size: 0x8)
    class UTextBlock* townName_txt;                                                   // 0x0338 (size: 0x8)
    bool Completed;                                                                   // 0x0340 (size: 0x1)
    class UgenericAchievement_EventMessage_C* daddy;                                  // 0x0348 (size: 0x8)
    class ARegion* Region;                                                            // 0x0350 (size: 0x8)
    double startingXp;                                                                // 0x0358 (size: 0x8)
    bool levelUp;                                                                     // 0x0360 (size: 0x1)
    double targetXp;                                                                  // 0x0368 (size: 0x8)
    double xp;                                                                        // 0x0370 (size: 0x8)
    double deltaIncr;                                                                 // 0x0378 (size: 0x8)
    double finalTargetXp;                                                             // 0x0380 (size: 0x8)
    double incr;                                                                      // 0x0388 (size: 0x8)
    double currThres;                                                                 // 0x0390 (size: 0x8)
    double lastSnd;                                                                   // 0x0398 (size: 0x8)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void Construct();
    void ExecuteUbergraph_reward_dev(int32 EntryPoint);
}; // Size: 0x3A0

#endif
