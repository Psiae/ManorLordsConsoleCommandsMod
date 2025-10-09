#ifndef UE4SS_SDK_OodleNetworkHandlerComponent_HPP
#define UE4SS_SDK_OodleNetworkHandlerComponent_HPP

#include "OodleNetworkHandlerComponent_enums.hpp"

class UOodleNetworkTrainerCommandlet : public UCommandlet
{
    bool bCompressionTest;                                                            // 0x0080 (size: 0x1)
    bool bWriteV5Dictionaries;                                                        // 0x0081 (size: 0x1)
    int32 HashTableSize;                                                              // 0x0084 (size: 0x4)
    int32 DictionarySize;                                                             // 0x0088 (size: 0x4)
    int32 DictionaryTrials;                                                           // 0x008C (size: 0x4)
    int32 TrialRandomness;                                                            // 0x0090 (size: 0x4)
    int32 TrialGenerations;                                                           // 0x0094 (size: 0x4)
    bool bNoTrials;                                                                   // 0x0098 (size: 0x1)

}; // Size: 0xA0

#endif
