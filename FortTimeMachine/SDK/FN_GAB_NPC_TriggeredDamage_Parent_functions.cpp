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

// Function GAB_NPC_TriggeredDamage_Parent.GAB_NPC_TriggeredDamage_Parent_C.TriggeredDamageBuilding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingSMActor*        TargetBuildingSM_Actor         (Parm, ZeroConstructor, IsPlainOldData)

void UGAB_NPC_TriggeredDamage_Parent_C::TriggeredDamageBuilding(class ABuildingSMActor* TargetBuildingSM_Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_NPC_TriggeredDamage_Parent.GAB_NPC_TriggeredDamage_Parent_C.TriggeredDamageBuilding");

	UGAB_NPC_TriggeredDamage_Parent_C_TriggeredDamageBuilding_Params params;
	params.TargetBuildingSM_Actor = TargetBuildingSM_Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_NPC_TriggeredDamage_Parent.GAB_NPC_TriggeredDamage_Parent_C.TriggeredDamagePawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               TargetFortPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void UGAB_NPC_TriggeredDamage_Parent_C::TriggeredDamagePawn(class AFortPawn* TargetFortPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_NPC_TriggeredDamage_Parent.GAB_NPC_TriggeredDamage_Parent_C.TriggeredDamagePawn");

	UGAB_NPC_TriggeredDamage_Parent_C_TriggeredDamagePawn_Params params;
	params.TargetFortPawn = TargetFortPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_NPC_TriggeredDamage_Parent.GAB_NPC_TriggeredDamage_Parent_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     EventData                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGAB_NPC_TriggeredDamage_Parent_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_NPC_TriggeredDamage_Parent.GAB_NPC_TriggeredDamage_Parent_C.K2_ActivateAbilityFromEvent");

	UGAB_NPC_TriggeredDamage_Parent_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_NPC_TriggeredDamage_Parent.GAB_NPC_TriggeredDamage_Parent_C.ExecuteUbergraph_GAB_NPC_TriggeredDamage_Parent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGAB_NPC_TriggeredDamage_Parent_C::ExecuteUbergraph_GAB_NPC_TriggeredDamage_Parent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_NPC_TriggeredDamage_Parent.GAB_NPC_TriggeredDamage_Parent_C.ExecuteUbergraph_GAB_NPC_TriggeredDamage_Parent");

	UGAB_NPC_TriggeredDamage_Parent_C_ExecuteUbergraph_GAB_NPC_TriggeredDamage_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
