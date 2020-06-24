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

// Function GAB_HuskDwarfHeavyMelee.GAB_HuskDwarfHeavyMelee_C.Completed_B2C8F1484A19A7577F3A6BA3168D0723
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)

void UGAB_HuskDwarfHeavyMelee_C::Completed_B2C8F1484A19A7577F3A6BA3168D0723(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskDwarfHeavyMelee.GAB_HuskDwarfHeavyMelee_C.Completed_B2C8F1484A19A7577F3A6BA3168D0723");

	UGAB_HuskDwarfHeavyMelee_C_Completed_B2C8F1484A19A7577F3A6BA3168D0723_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskDwarfHeavyMelee.GAB_HuskDwarfHeavyMelee_C.Cancelled_B2C8F1484A19A7577F3A6BA3168D0723
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)

void UGAB_HuskDwarfHeavyMelee_C::Cancelled_B2C8F1484A19A7577F3A6BA3168D0723(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskDwarfHeavyMelee.GAB_HuskDwarfHeavyMelee_C.Cancelled_B2C8F1484A19A7577F3A6BA3168D0723");

	UGAB_HuskDwarfHeavyMelee_C_Cancelled_B2C8F1484A19A7577F3A6BA3168D0723_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskDwarfHeavyMelee.GAB_HuskDwarfHeavyMelee_C.Triggered_B2C8F1484A19A7577F3A6BA3168D0723
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)

void UGAB_HuskDwarfHeavyMelee_C::Triggered_B2C8F1484A19A7577F3A6BA3168D0723(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskDwarfHeavyMelee.GAB_HuskDwarfHeavyMelee_C.Triggered_B2C8F1484A19A7577F3A6BA3168D0723");

	UGAB_HuskDwarfHeavyMelee_C_Triggered_B2C8F1484A19A7577F3A6BA3168D0723_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskDwarfHeavyMelee.GAB_HuskDwarfHeavyMelee_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAB_HuskDwarfHeavyMelee_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskDwarfHeavyMelee.GAB_HuskDwarfHeavyMelee_C.K2_ActivateAbility");

	UGAB_HuskDwarfHeavyMelee_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskDwarfHeavyMelee.GAB_HuskDwarfHeavyMelee_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)

void UGAB_HuskDwarfHeavyMelee_C::K2_OnEndAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskDwarfHeavyMelee.GAB_HuskDwarfHeavyMelee_C.K2_OnEndAbility");

	UGAB_HuskDwarfHeavyMelee_C_K2_OnEndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskDwarfHeavyMelee.GAB_HuskDwarfHeavyMelee_C.ExecuteUbergraph_GAB_HuskDwarfHeavyMelee
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGAB_HuskDwarfHeavyMelee_C::ExecuteUbergraph_GAB_HuskDwarfHeavyMelee(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskDwarfHeavyMelee.GAB_HuskDwarfHeavyMelee_C.ExecuteUbergraph_GAB_HuskDwarfHeavyMelee");

	UGAB_HuskDwarfHeavyMelee_C_ExecuteUbergraph_GAB_HuskDwarfHeavyMelee_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
