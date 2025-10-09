#ifndef UE4SS_SDK_ALS_Camera_BPI_HPP
#define UE4SS_SDK_ALS_Camera_BPI_HPP

class IALS_Camera_BPI_C : public IInterface
{

    void BPI_Get_3P_TraceParams(FVector& TraceOrigin, float& TraceRadius, TEnumAsByte<ETraceTypeQuery>& TraceChannel);
    FTransform BPI_Get_3P_PivotTarget();
    FVector BPI_Get_FP_CameraTarget();
    void BPI_Get_CameraParameters(float& TP_FOV, float& FP_FOV, bool& RightShoulder);
}; // Size: 0x28

#endif
