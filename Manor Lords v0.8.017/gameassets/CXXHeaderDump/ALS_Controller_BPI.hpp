#ifndef UE4SS_SDK_ALS_Controller_BPI_HPP
#define UE4SS_SDK_ALS_Controller_BPI_HPP

class IALS_Controller_BPI_C : public IInterface
{

    void BPI_Get_DebugInfo(class ACharacter*& DebugFocusCharacter, bool& DebugView, bool& ShowHUD, bool& ShowTraces, bool& ShowDebugShapes, bool& ShowLayerColors, bool& Slomo, bool& ShowCharacterInfo);
}; // Size: 0x28

#endif
