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

// Function GAB_NPC_ElementalDamage_Fire.GAB_NPC_ElementalDamage_Fire_C.TriggeredDamageBuilding
struct UGAB_NPC_ElementalDamage_Fire_C_TriggeredDamageBuilding_Params
{
	class ABuildingSMActor**                           TargetBuildingSM_Actor;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_NPC_ElementalDamage_Fire.GAB_NPC_ElementalDamage_Fire_C.TriggeredDamagePawn
struct UGAB_NPC_ElementalDamage_Fire_C_TriggeredDamagePawn_Params
{
	class AFortPawn**                                  TargetFortPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_NPC_ElementalDamage_Fire.GAB_NPC_ElementalDamage_Fire_C.ExecuteUbergraph_GAB_NPC_ElementalDamage_Fire
struct UGAB_NPC_ElementalDamage_Fire_C_ExecuteUbergraph_GAB_NPC_ElementalDamage_Fire_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
