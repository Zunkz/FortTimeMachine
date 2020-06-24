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

// Function GAB_DefenderNeedsAmmo.GAB_DefenderNeedsAmmo_C.OnMoveFinished_60C03C1F4256EA9FADC94D8900D2F075
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> Result                         (Parm, ZeroConstructor, IsPlainOldData)
// class AAIController*           AIController                   (Parm, ZeroConstructor, IsPlainOldData)

void UGAB_DefenderNeedsAmmo_C::OnMoveFinished_60C03C1F4256EA9FADC94D8900D2F075(TEnumAsByte<EPathFollowingResult> Result, class AAIController* AIController)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_DefenderNeedsAmmo.GAB_DefenderNeedsAmmo_C.OnMoveFinished_60C03C1F4256EA9FADC94D8900D2F075");

	UGAB_DefenderNeedsAmmo_C_OnMoveFinished_60C03C1F4256EA9FADC94D8900D2F075_Params params;
	params.Result = Result;
	params.AIController = AIController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_DefenderNeedsAmmo.GAB_DefenderNeedsAmmo_C.OnRequestFailed_60C03C1F4256EA9FADC94D8900D2F075
// (BlueprintCallable, BlueprintEvent)

void UGAB_DefenderNeedsAmmo_C::OnRequestFailed_60C03C1F4256EA9FADC94D8900D2F075()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_DefenderNeedsAmmo.GAB_DefenderNeedsAmmo_C.OnRequestFailed_60C03C1F4256EA9FADC94D8900D2F075");

	UGAB_DefenderNeedsAmmo_C_OnRequestFailed_60C03C1F4256EA9FADC94D8900D2F075_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_DefenderNeedsAmmo.GAB_DefenderNeedsAmmo_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAB_DefenderNeedsAmmo_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_DefenderNeedsAmmo.GAB_DefenderNeedsAmmo_C.K2_ActivateAbility");

	UGAB_DefenderNeedsAmmo_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_DefenderNeedsAmmo.GAB_DefenderNeedsAmmo_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)

void UGAB_DefenderNeedsAmmo_C::K2_OnEndAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_DefenderNeedsAmmo.GAB_DefenderNeedsAmmo_C.K2_OnEndAbility");

	UGAB_DefenderNeedsAmmo_C_K2_OnEndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_DefenderNeedsAmmo.GAB_DefenderNeedsAmmo_C.ExecuteUbergraph_GAB_DefenderNeedsAmmo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGAB_DefenderNeedsAmmo_C::ExecuteUbergraph_GAB_DefenderNeedsAmmo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_DefenderNeedsAmmo.GAB_DefenderNeedsAmmo_C.ExecuteUbergraph_GAB_DefenderNeedsAmmo");

	UGAB_DefenderNeedsAmmo_C_ExecuteUbergraph_GAB_DefenderNeedsAmmo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
