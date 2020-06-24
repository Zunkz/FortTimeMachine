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

// Function DefenderAimAtActiveRifts.DefenderAimAtActiveRifts_C.ReceiveTick
struct UDefenderAimAtActiveRifts_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DefenderAimAtActiveRifts.DefenderAimAtActiveRifts_C.ReceiveActivation
struct UDefenderAimAtActiveRifts_C_ReceiveActivation_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DefenderAimAtActiveRifts.DefenderAimAtActiveRifts_C.ReceiveDeactivation
struct UDefenderAimAtActiveRifts_C_ReceiveDeactivation_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DefenderAimAtActiveRifts.DefenderAimAtActiveRifts_C.ExecuteUbergraph_DefenderAimAtActiveRifts
struct UDefenderAimAtActiveRifts_C_ExecuteUbergraph_DefenderAimAtActiveRifts_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
