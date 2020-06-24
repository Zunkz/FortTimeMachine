// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GAB_NPC_ElementalDamage_Lightning.GAB_NPC_ElementalDamage_Lightning_C.TriggeredDamagePawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn**              TargetFortPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void UGAB_NPC_ElementalDamage_Lightning_C::TriggeredDamagePawn(class AFortPawn** TargetFortPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_NPC_ElementalDamage_Lightning.GAB_NPC_ElementalDamage_Lightning_C.TriggeredDamagePawn");

	UGAB_NPC_ElementalDamage_Lightning_C_TriggeredDamagePawn_Params params;
	params.TargetFortPawn = TargetFortPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_NPC_ElementalDamage_Lightning.GAB_NPC_ElementalDamage_Lightning_C.TriggeredDamageBuilding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingSMActor**       TargetBuildingSM_Actor         (Parm, ZeroConstructor, IsPlainOldData)

void UGAB_NPC_ElementalDamage_Lightning_C::TriggeredDamageBuilding(class ABuildingSMActor** TargetBuildingSM_Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_NPC_ElementalDamage_Lightning.GAB_NPC_ElementalDamage_Lightning_C.TriggeredDamageBuilding");

	UGAB_NPC_ElementalDamage_Lightning_C_TriggeredDamageBuilding_Params params;
	params.TargetBuildingSM_Actor = TargetBuildingSM_Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_NPC_ElementalDamage_Lightning.GAB_NPC_ElementalDamage_Lightning_C.ExecuteUbergraph_GAB_NPC_ElementalDamage_Lightning
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGAB_NPC_ElementalDamage_Lightning_C::ExecuteUbergraph_GAB_NPC_ElementalDamage_Lightning(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_NPC_ElementalDamage_Lightning.GAB_NPC_ElementalDamage_Lightning_C.ExecuteUbergraph_GAB_NPC_ElementalDamage_Lightning");

	UGAB_NPC_ElementalDamage_Lightning_C_ExecuteUbergraph_GAB_NPC_ElementalDamage_Lightning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
