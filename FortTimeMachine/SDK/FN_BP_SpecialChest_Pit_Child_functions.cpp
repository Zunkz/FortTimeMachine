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

// Function BP_SpecialChest_Pit_Child.BP_SpecialChest_Pit_Child_C.BlueprintCanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn**              InteractingPawn                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_SpecialChest_Pit_Child_C::BlueprintCanInteract(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialChest_Pit_Child.BP_SpecialChest_Pit_Child_C.BlueprintCanInteract");

	ABP_SpecialChest_Pit_Child_C_BlueprintCanInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SpecialChest_Pit_Child.BP_SpecialChest_Pit_Child_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SpecialChest_Pit_Child_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialChest_Pit_Child.BP_SpecialChest_Pit_Child_C.UserConstructionScript");

	ABP_SpecialChest_Pit_Child_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpecialChest_Pit_Child.BP_SpecialChest_Pit_Child_C.Searched
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_SpecialChest_Pit_Child_C::Searched()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialChest_Pit_Child.BP_SpecialChest_Pit_Child_C.Searched");

	ABP_SpecialChest_Pit_Child_C_Searched_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpecialChest_Pit_Child.BP_SpecialChest_Pit_Child_C.OnBeginSearch
// (Event, Public, BlueprintEvent)

void ABP_SpecialChest_Pit_Child_C::OnBeginSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialChest_Pit_Child.BP_SpecialChest_Pit_Child_C.OnBeginSearch");

	ABP_SpecialChest_Pit_Child_C_OnBeginSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpecialChest_Pit_Child.BP_SpecialChest_Pit_Child_C.OnSearchInterrupted
// (Event, Public, BlueprintEvent)

void ABP_SpecialChest_Pit_Child_C::OnSearchInterrupted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialChest_Pit_Child.BP_SpecialChest_Pit_Child_C.OnSearchInterrupted");

	ABP_SpecialChest_Pit_Child_C_OnSearchInterrupted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpecialChest_Pit_Child.BP_SpecialChest_Pit_Child_C.OnLoot
// (Event, Public, BlueprintEvent)

void ABP_SpecialChest_Pit_Child_C::OnLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialChest_Pit_Child.BP_SpecialChest_Pit_Child_C.OnLoot");

	ABP_SpecialChest_Pit_Child_C_OnLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpecialChest_Pit_Child.BP_SpecialChest_Pit_Child_C.ExecuteUbergraph_BP_SpecialChest_Pit_Child
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpecialChest_Pit_Child_C::ExecuteUbergraph_BP_SpecialChest_Pit_Child(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialChest_Pit_Child.BP_SpecialChest_Pit_Child_C.ExecuteUbergraph_BP_SpecialChest_Pit_Child");

	ABP_SpecialChest_Pit_Child_C_ExecuteUbergraph_BP_SpecialChest_Pit_Child_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
