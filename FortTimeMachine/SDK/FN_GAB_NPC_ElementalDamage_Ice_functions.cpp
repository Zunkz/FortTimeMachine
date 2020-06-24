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

// Function GAB_NPC_ElementalDamage_Ice.GAB_NPC_ElementalDamage_Ice_C.TriggeredDamageBuilding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingSMActor**       TargetBuildingSM_Actor         (Parm, ZeroConstructor, IsPlainOldData)

void UGAB_NPC_ElementalDamage_Ice_C::TriggeredDamageBuilding(class ABuildingSMActor** TargetBuildingSM_Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_NPC_ElementalDamage_Ice.GAB_NPC_ElementalDamage_Ice_C.TriggeredDamageBuilding");

	UGAB_NPC_ElementalDamage_Ice_C_TriggeredDamageBuilding_Params params;
	params.TargetBuildingSM_Actor = TargetBuildingSM_Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_NPC_ElementalDamage_Ice.GAB_NPC_ElementalDamage_Ice_C.ExecuteUbergraph_GAB_NPC_ElementalDamage_Ice
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGAB_NPC_ElementalDamage_Ice_C::ExecuteUbergraph_GAB_NPC_ElementalDamage_Ice(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_NPC_ElementalDamage_Ice.GAB_NPC_ElementalDamage_Ice_C.ExecuteUbergraph_GAB_NPC_ElementalDamage_Ice");

	UGAB_NPC_ElementalDamage_Ice_C_ExecuteUbergraph_GAB_NPC_ElementalDamage_Ice_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
