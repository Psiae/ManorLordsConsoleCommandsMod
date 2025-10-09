#ifndef UE4SS_SDK_MagicLeapPrivileges_HPP
#define UE4SS_SDK_MagicLeapPrivileges_HPP

#include "MagicLeapPrivileges_enums.hpp"

class UMagicLeapPrivilegesFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool RequestPrivilegeAsync(EMagicLeapPrivilege Privilege, const FRequestPrivilegeAsyncResultDelegate& ResultDelegate);
    bool RequestPrivilege(EMagicLeapPrivilege Privilege);
    bool CheckPrivilege(EMagicLeapPrivilege Privilege);
}; // Size: 0x28

#endif
