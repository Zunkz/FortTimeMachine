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

// Function FortBTService_ForceNormalAILOD.FortBTService_ForceNormalAILOD_C.ReceiveActivation
struct UFortBTService_ForceNormalAILOD_C_ReceiveActivation_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortBTService_ForceNormalAILOD.FortBTService_ForceNormalAILOD_C.ReceiveDeactivation
struct UFortBTService_ForceNormalAILOD_C_ReceiveDeactivation_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortBTService_ForceNormalAILOD.FortBTService_ForceNormalAILOD_C.ExecuteUbergraph_FortBTService_ForceNormalAILOD
struct UFortBTService_ForceNormalAILOD_C_ExecuteUbergraph_FortBTService_ForceNormalAILOD_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
