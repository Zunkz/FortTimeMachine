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

// Function PowerRequirement.PowerRequirement_C.GenerateToolTipWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UPowerRequirement_C::GenerateToolTipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerRequirement.PowerRequirement_C.GenerateToolTipWidget");

	UPowerRequirement_C_GenerateToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PowerRequirement.PowerRequirement_C.SetUIForRequired
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PartyPower                     (Parm, ZeroConstructor, IsPlainOldData)

void UPowerRequirement_C::SetUIForRequired(int PartyPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerRequirement.PowerRequirement_C.SetUIForRequired");

	UPowerRequirement_C_SetUIForRequired_Params params;
	params.PartyPower = PartyPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerRequirement.PowerRequirement_C.SetUIForRecommended
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PartyPower                     (Parm, ZeroConstructor, IsPlainOldData)

void UPowerRequirement_C::SetUIForRecommended(int PartyPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerRequirement.PowerRequirement_C.SetUIForRecommended");

	UPowerRequirement_C_SetUIForRecommended_Params params;
	params.PartyPower = PartyPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerRequirement.PowerRequirement_C.Update
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPowerRequirement_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerRequirement.PowerRequirement_C.Update");

	UPowerRequirement_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerRequirement.PowerRequirement_C.SetRequirements
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RequiredPower                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            RecommendedPower               (Parm, ZeroConstructor, IsPlainOldData)

void UPowerRequirement_C::SetRequirements(int RequiredPower, int RecommendedPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerRequirement.PowerRequirement_C.SetRequirements");

	UPowerRequirement_C_SetRequirements_Params params;
	params.RequiredPower = RequiredPower;
	params.RecommendedPower = RecommendedPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerRequirement.PowerRequirement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPowerRequirement_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerRequirement.PowerRequirement_C.Construct");

	UPowerRequirement_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerRequirement.PowerRequirement_C.PlayerInfoChanged
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        UniqueId                       (ConstParm, Parm, OutParm, ReferenceParm)

void UPowerRequirement_C::PlayerInfoChanged(const struct FUniqueNetIdRepl& UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerRequirement.PowerRequirement_C.PlayerInfoChanged");

	UPowerRequirement_C_PlayerInfoChanged_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerRequirement.PowerRequirement_C.ExecuteUbergraph_PowerRequirement
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPowerRequirement_C::ExecuteUbergraph_PowerRequirement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerRequirement.PowerRequirement_C.ExecuteUbergraph_PowerRequirement");

	UPowerRequirement_C_ExecuteUbergraph_PowerRequirement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
