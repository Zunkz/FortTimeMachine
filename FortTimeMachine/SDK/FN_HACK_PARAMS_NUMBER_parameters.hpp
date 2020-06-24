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

// Function HACK_PARAMS_NUMBER.HACK_PARAMS_NUMBER_C.BreakParams
struct UHACK_PARAMS_NUMBER_C_BreakParams_Params
{
	int                                                NumberToPass;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HACK_PARAMS_NUMBER.HACK_PARAMS_NUMBER_C.SetParams
struct UHACK_PARAMS_NUMBER_C_SetParams_Params
{
	int                                                NumberToPass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UHACK_PARAMS_NUMBER_C*                       ThisObject;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
