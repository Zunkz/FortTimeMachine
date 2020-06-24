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

// Function GAB_SurvivorMelee.GAB_SurvivorMelee_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)

void UGAB_SurvivorMelee_C::K2_OnEndAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorMelee.GAB_SurvivorMelee_C.K2_OnEndAbility");

	UGAB_SurvivorMelee_C_K2_OnEndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorMelee.GAB_SurvivorMelee_C.UseMeleeWeapon
// (BlueprintCallable, BlueprintEvent)

void UGAB_SurvivorMelee_C::UseMeleeWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorMelee.GAB_SurvivorMelee_C.UseMeleeWeapon");

	UGAB_SurvivorMelee_C_UseMeleeWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorMelee.GAB_SurvivorMelee_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAB_SurvivorMelee_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorMelee.GAB_SurvivorMelee_C.K2_ActivateAbility");

	UGAB_SurvivorMelee_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorMelee.GAB_SurvivorMelee_C.ExecuteUbergraph_GAB_SurvivorMelee
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGAB_SurvivorMelee_C::ExecuteUbergraph_GAB_SurvivorMelee(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorMelee.GAB_SurvivorMelee_C.ExecuteUbergraph_GAB_SurvivorMelee");

	UGAB_SurvivorMelee_C_ExecuteUbergraph_GAB_SurvivorMelee_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
