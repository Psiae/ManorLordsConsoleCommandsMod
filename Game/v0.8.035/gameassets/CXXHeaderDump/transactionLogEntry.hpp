#ifndef UE4SS_SDK_transactionLogEntry_HPP
#define UE4SS_SDK_transactionLogEntry_HPP

class UtransactionLogEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton;                                    // 0x02D8 (size: 0x8)
    class URichTextBlock* RichTextBlock_44;                                           // 0x02E0 (size: 0x8)

    class ARegion* getRegionFromRegionIndex(uint8 regionIndex);
    void constructTransactionText(const FTradeLogEntry& TradeLogEntry, FGameplayDate& GameplayDate);
    void getRegionNameIfValid(class ARegion* Region, FString& Region Name);
    void Construct();
    void ExecuteUbergraph_transactionLogEntry(int32 EntryPoint);
}; // Size: 0x2E8

#endif
