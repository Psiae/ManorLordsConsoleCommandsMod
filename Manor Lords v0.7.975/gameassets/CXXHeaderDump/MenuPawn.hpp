#ifndef UE4SS_SDK_MenuPawn_HPP
#define UE4SS_SDK_MenuPawn_HPP

class AMenuPawn_C : public AMenuPawn
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    class UAudioComponent* music;                                                     // 0x0288 (size: 0x8)
    class UCineCameraComponent* CineCamera;                                           // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    TEnumAsByte<ETimelineDirection::Type> setDefaultAA__Direction_D3EF9C61458491A93D560ABCAEAB8CF8; // 0x02A0 (size: 0x1)
    class UTimelineComponent* setDefaultAA;                                           // 0x02A8 (size: 0x8)
    TEnumAsByte<ETimelineDirection::Type> start_the_game_delayed__Direction_92EB535847828C20F93D97B2218879BC; // 0x02B0 (size: 0x1)
    class UTimelineComponent* start_the_game_delayed;                                 // 0x02B8 (size: 0x8)
    FVector cameraMove_relativeLocation_51C2489046C8A91551D142947AC51778;             // 0x02C0 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> cameraMove__Direction_51C2489046C8A91551D142947AC51778; // 0x02CC (size: 0x1)
    class UTimelineComponent* cameraMove;                                             // 0x02D0 (size: 0x8)
    class UmainMenu_widget_C* MainMenu;                                               // 0x02D8 (size: 0x8)
    FString CurrentAppliedAaAlgo;                                                     // 0x02E0 (size: 0x10)
    class UEarlyAccessWidget_C* EarlyAccessDialog;                                    // 0x02F0 (size: 0x8)

    class UNaviUi* FindFocusedWindow();
    void SendInputToFocusedWindow(ENaviUiIntent Key);
    void updateGameWindowFocus();
    void playMusicIfStopped();
    void cameraMove__FinishedFunc();
    void cameraMove__UpdateFunc();
    void start_the_game_delayed__FinishedFunc();
    void start_the_game_delayed__UpdateFunc();
    void setDefaultAA__FinishedFunc();
    void setDefaultAA__UpdateFunc();
    void InpActEvt_esc_K2Node_InputActionEvent_2(FKey Key);
    void OnFailure_630FB49B4B011F1535DD3CB796FE8789(FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag);
    void OnSuccess_630FB49B4B011F1535DD3CB796FE8789(FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag);
    void InpActEvt_MenuAccept_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_MenuBack_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void OnWindowFocusChanged(bool bIsFocused);
    void InpAxisEvt_MenuForward_K2Node_InputAxisEvent_0(float AxisValue);
    void InpAxisEvt_MenuRight_K2Node_InputAxisEvent_1(float AxisValue);
    void ExecuteUbergraph_MenuPawn(int32 EntryPoint);
}; // Size: 0x2F8

#endif
