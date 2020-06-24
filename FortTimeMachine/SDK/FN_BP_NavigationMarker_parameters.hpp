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

// Function BP_NavigationMarker.BP_NavigationMarker_C.UserConstructionScript
struct ABP_NavigationMarker_C_UserConstructionScript_Params
{
};

// Function BP_NavigationMarker.BP_NavigationMarker_C.EnableMarkerForClient
struct ABP_NavigationMarker_C_EnableMarkerForClient_Params
{
	class ABP_NavigationMarker_C*                      ActorIn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NavigationMarker.BP_NavigationMarker_C.DisableMarkerForClient
struct ABP_NavigationMarker_C_DisableMarkerForClient_Params
{
	class ABP_NavigationMarker_C*                      ActorIn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NavigationMarker.BP_NavigationMarker_C.ReceiveBeginPlay
struct ABP_NavigationMarker_C_ReceiveBeginPlay_Params
{
};

// Function BP_NavigationMarker.BP_NavigationMarker_C.ExecuteUbergraph_BP_NavigationMarker
struct ABP_NavigationMarker_C_ExecuteUbergraph_BP_NavigationMarker_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
