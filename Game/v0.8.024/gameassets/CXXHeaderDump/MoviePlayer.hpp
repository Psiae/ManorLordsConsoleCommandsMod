#ifndef UE4SS_SDK_MoviePlayer_HPP
#define UE4SS_SDK_MoviePlayer_HPP

#include "MoviePlayer_enums.hpp"

class UMoviePlayerSettings : public UObject
{
    bool bWaitForMoviesToComplete;                                                    // 0x0028 (size: 0x1)
    bool bMoviesAreSkippable;                                                         // 0x0029 (size: 0x1)
    TArray<FString> StartupMovies;                                                    // 0x0030 (size: 0x10)

}; // Size: 0x40

#endif
