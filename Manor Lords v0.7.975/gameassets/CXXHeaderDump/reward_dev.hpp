#ifndef UE4SS_SDK_reward_dev_HPP
#define UE4SS_SDK_reward_dev_HPP

class Ureward_dev_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* lvlUp;                                                    // 0x0268 (size: 0x8)
    class UWidgetAnimation* fadeInAndOut;                                             // 0x0270 (size: 0x8)
    class UTextBlock* Exp;                                                            // 0x0278 (size: 0x8)
    class UImage* flare;                                                              // 0x0280 (size: 0x8)
    class UImage* lv_bg;                                                              // 0x0288 (size: 0x8)
    class UImage* lv_glow;                                                            // 0x0290 (size: 0x8)
    class UTextBlock* lv_txt;                                                         // 0x0298 (size: 0x8)
    class UProgressBar* ProgressBar_0;                                                // 0x02A0 (size: 0x8)
    class UImage* spacera;                                                            // 0x02A8 (size: 0x8)
    class UImage* spacera_1;                                                          // 0x02B0 (size: 0x8)
    class UTextBlock* townName_txt;                                                   // 0x02B8 (size: 0x8)
    bool Completed;                                                                   // 0x02C0 (size: 0x1)
    class UgenericAchievement_EventMessage_C* daddy;                                  // 0x02C8 (size: 0x8)
    class ARegion* Region;                                                            // 0x02D0 (size: 0x8)
    float startingXp;                                                                 // 0x02D8 (size: 0x4)
    bool levelUp;                                                                     // 0x02DC (size: 0x1)
    float targetXp;                                                                   // 0x02E0 (size: 0x4)
    float xp;                                                                         // 0x02E4 (size: 0x4)
    float deltaIncr;                                                                  // 0x02E8 (size: 0x4)
    float finalTargetXp;                                                              // 0x02EC (size: 0x4)
    float incr;                                                                       // 0x02F0 (size: 0x4)
    float currThres;                                                                  // 0x02F4 (size: 0x4)
    float lastSnd;                                                                    // 0x02F8 (size: 0x4)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void Construct();
    void ExecuteUbergraph_reward_dev(int32 EntryPoint);
}; // Size: 0x2FC

#endif
