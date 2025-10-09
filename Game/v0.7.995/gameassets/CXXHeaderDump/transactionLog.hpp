#ifndef UE4SS_SDK_transactionLog_HPP
#define UE4SS_SDK_transactionLog_HPP

class UtransactionLog_C : public UUserWidget
{
    class UVerticalBox* trades_vb;                                                    // 0x02E0 (size: 0x8)
    class UtransactionLogEntry_C* transactionLogEntry;                                // 0x02E8 (size: 0x8)
    class UtransactionLogEntry_C* transactionLogEntry_1;                              // 0x02F0 (size: 0x8)
    class UtransactionLogEntry_C* transactionLogEntry_2;                              // 0x02F8 (size: 0x8)
    class UtransactionLogEntry_C* transactionLogEntry_3;                              // 0x0300 (size: 0x8)
    class UtransactionLogEntry_C* transactionLogEntry_4;                              // 0x0308 (size: 0x8)
    class UtransactionLogEntry_C* transactionLogEntry_5;                              // 0x0310 (size: 0x8)
    class UtransactionLogEntry_C* transactionLogEntry_6;                              // 0x0318 (size: 0x8)
    class UtransactionLogEntry_C* transactionLogEntry_7;                              // 0x0320 (size: 0x8)
    class UtransactionLogEntry_C* transactionLogEntry_8;                              // 0x0328 (size: 0x8)
    class UtransactionLogEntry_C* transactionLogEntry_9;                              // 0x0330 (size: 0x8)
    class UtransactionLogEntry_C* transactionLogEntry_10;                             // 0x0338 (size: 0x8)
    class UtransactionLogEntry_C* transactionLogEntry_11;                             // 0x0340 (size: 0x8)
    FString currentFilter;                                                            // 0x0348 (size: 0x10)

    bool isRegionEqualToDevelopmentViewRegion(uint8 regionIndex, class APawnCPP* Player);
    bool isRegionOwnerByPlayer(uint8 regionIndex, class APawnCPP* Player);
    void regenerateTransactionEntriesForCurrentRegion(class ARegion* transactionRegion, FString Filter);
}; // Size: 0x358

#endif
