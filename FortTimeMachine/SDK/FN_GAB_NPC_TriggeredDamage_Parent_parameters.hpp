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

// Function GAB_NPC_TriggeredDamage_Parent.GAB_NPC_TriggeredDamage_Parent_C.TriggeredDamageBuilding
struct UGAB_NPC_TriggeredDamage_Parent_C_TriggeredDamageBuilding_Params
{
	class ABuildingSMActor*                            TargetBuildingSM_Actor;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_NPC_TriggeredDamage_Parent.GAB_NPC_TriggeredDamage_Parent_C.TriggeredDamagePawn
struct UGAB_NPC_TriggeredDamage_Parent_C_TriggeredDamagePawn_Params
{
	class AFortPawn*                                   TargetFortPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_NPC_TriggeredDamage_Parent.GAB_NPC_TriggeredDamage_Parent_C.K2_ActivateAbilityFromEvent
struct UGAB_NPC_TriggeredDamage_Parent_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GAB_NPC_TriggeredDamage_Parent.GAB_NPC_TriggeredDamage_Parent_C.ExecuteUbergraph_GAB_NPC_TriggeredDamage_Parent
struct UGAB_NPC_TriggeredDamage_Parent_C_ExecuteUbergraph_GAB_NPC_TriggeredDamage_Parent_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif