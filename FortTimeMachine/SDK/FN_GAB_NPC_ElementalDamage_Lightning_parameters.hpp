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

// Function GAB_NPC_ElementalDamage_Lightning.GAB_NPC_ElementalDamage_Lightning_C.TriggeredDamagePawn
struct UGAB_NPC_ElementalDamage_Lightning_C_TriggeredDamagePawn_Params
{
	class AFortPawn**                                  TargetFortPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_NPC_ElementalDamage_Lightning.GAB_NPC_ElementalDamage_Lightning_C.TriggeredDamageBuilding
struct UGAB_NPC_ElementalDamage_Lightning_C_TriggeredDamageBuilding_Params
{
	class ABuildingSMActor**                           TargetBuildingSM_Actor;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_NPC_ElementalDamage_Lightning.GAB_NPC_ElementalDamage_Lightning_C.ExecuteUbergraph_GAB_NPC_ElementalDamage_Lightning
struct UGAB_NPC_ElementalDamage_Lightning_C_ExecuteUbergraph_GAB_NPC_ElementalDamage_Lightning_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
