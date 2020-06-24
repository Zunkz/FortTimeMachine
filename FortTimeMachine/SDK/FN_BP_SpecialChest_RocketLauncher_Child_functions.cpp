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

// Function BP_SpecialChest_RocketLauncher_Child.BP_SpecialChest_RocketLauncher_Child_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SpecialChest_RocketLauncher_Child_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialChest_RocketLauncher_Child.BP_SpecialChest_RocketLauncher_Child_C.UserConstructionScript");

	ABP_SpecialChest_RocketLauncher_Child_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpecialChest_RocketLauncher_Child.BP_SpecialChest_RocketLauncher_Child_C.Searched
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_SpecialChest_RocketLauncher_Child_C::Searched()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialChest_RocketLauncher_Child.BP_SpecialChest_RocketLauncher_Child_C.Searched");

	ABP_SpecialChest_RocketLauncher_Child_C_Searched_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpecialChest_RocketLauncher_Child.BP_SpecialChest_RocketLauncher_Child_C.ExecuteUbergraph_BP_SpecialChest_RocketLauncher_Child
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpecialChest_RocketLauncher_Child_C::ExecuteUbergraph_BP_SpecialChest_RocketLauncher_Child(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialChest_RocketLauncher_Child.BP_SpecialChest_RocketLauncher_Child_C.ExecuteUbergraph_BP_SpecialChest_RocketLauncher_Child");

	ABP_SpecialChest_RocketLauncher_Child_C_ExecuteUbergraph_BP_SpecialChest_RocketLauncher_Child_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
