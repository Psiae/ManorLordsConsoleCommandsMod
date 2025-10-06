#ifndef UE4SS_SDK_SocketSubsystemEOS_HPP
#define UE4SS_SDK_SocketSubsystemEOS_HPP

class UNetConnectionEOS : public UIpConnection
{
}; // Size: 0x1E78

class UNetDriverEOSBase : public UIpNetDriver
{
    bool bIsPassthrough;                                                              // 0x0980 (size: 0x1)
    bool bIsUsingP2PSockets;                                                          // 0x0981 (size: 0x1)

}; // Size: 0x988

#endif
