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

// Function LayoutBuildRequirement.LayoutBuildRequirement_C.UserConstructionScript
struct ALayoutBuildRequirement_C_UserConstructionScript_Params
{
};

// Function LayoutBuildRequirement.LayoutBuildRequirement_C.Event_OnLayoutSatisfied
struct ALayoutBuildRequirement_C_Event_OnLayoutSatisfied_Params
{
	class ABuildingLayoutRequirement*                  LayoutRequirement;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class ABuildingSMActor*                            SatisfyingBuildingSMActor;                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LayoutBuildRequirement.LayoutBuildRequirement_C.Event_OnLayoutUnSatisfied
struct ALayoutBuildRequirement_C_Event_OnLayoutUnSatisfied_Params
{
	class ABuildingLayoutRequirement*                  LayoutRequirement;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class ABuildingSMActor*                            SatisfyingBuildingSMActor;                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LayoutBuildRequirement.LayoutBuildRequirement_C.ReceiveBeginPlay
struct ALayoutBuildRequirement_C_ReceiveBeginPlay_Params
{
};

// Function LayoutBuildRequirement.LayoutBuildRequirement_C.ExecuteUbergraph_LayoutBuildRequirement
struct ALayoutBuildRequirement_C_ExecuteUbergraph_LayoutBuildRequirement_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
