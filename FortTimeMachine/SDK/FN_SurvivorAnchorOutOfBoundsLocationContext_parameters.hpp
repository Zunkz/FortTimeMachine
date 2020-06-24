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

// Function SurvivorAnchorOutOfBoundsLocationContext.SurvivorAnchorOutOfBoundsLocationContext_C.ProvideSingleLocation
struct USurvivorAnchorOutOfBoundsLocationContext_C_ProvideSingleLocation_Params
{
	class UObject**                                    QuerierObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     QuerierActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ResultingLocation;                                        // (Parm, OutParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
