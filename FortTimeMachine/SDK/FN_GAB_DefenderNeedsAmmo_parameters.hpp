#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GAB_DefenderNeedsAmmo.GAB_DefenderNeedsAmmo_C.OnMoveFinished_60C03C1F4256EA9FADC94D8900D2F075
struct UGAB_DefenderNeedsAmmo_C_OnMoveFinished_60C03C1F4256EA9FADC94D8900D2F075_Params
{
	TEnumAsByte<EPathFollowingResult>                  Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AAIController*                               AIController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_DefenderNeedsAmmo.GAB_DefenderNeedsAmmo_C.OnRequestFailed_60C03C1F4256EA9FADC94D8900D2F075
struct UGAB_DefenderNeedsAmmo_C_OnRequestFailed_60C03C1F4256EA9FADC94D8900D2F075_Params
{
};

// Function GAB_DefenderNeedsAmmo.GAB_DefenderNeedsAmmo_C.K2_ActivateAbility
struct UGAB_DefenderNeedsAmmo_C_K2_ActivateAbility_Params
{
};

// Function GAB_DefenderNeedsAmmo.GAB_DefenderNeedsAmmo_C.K2_OnEndAbility
struct UGAB_DefenderNeedsAmmo_C_K2_OnEndAbility_Params
{
};

// Function GAB_DefenderNeedsAmmo.GAB_DefenderNeedsAmmo_C.ExecuteUbergraph_GAB_DefenderNeedsAmmo
struct UGAB_DefenderNeedsAmmo_C_ExecuteUbergraph_GAB_DefenderNeedsAmmo_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
