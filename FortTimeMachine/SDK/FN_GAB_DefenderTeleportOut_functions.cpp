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

// Function GAB_DefenderTeleportOut.GAB_DefenderTeleportOut_C.Completed_50776FD24FD2018ECF8A639C63CF78FD
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)

void UGAB_DefenderTeleportOut_C::Completed_50776FD24FD2018ECF8A639C63CF78FD(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_DefenderTeleportOut.GAB_DefenderTeleportOut_C.Completed_50776FD24FD2018ECF8A639C63CF78FD");

	UGAB_DefenderTeleportOut_C_Completed_50776FD24FD2018ECF8A639C63CF78FD_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_DefenderTeleportOut.GAB_DefenderTeleportOut_C.Cancelled_50776FD24FD2018ECF8A639C63CF78FD
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)

void UGAB_DefenderTeleportOut_C::Cancelled_50776FD24FD2018ECF8A639C63CF78FD(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_DefenderTeleportOut.GAB_DefenderTeleportOut_C.Cancelled_50776FD24FD2018ECF8A639C63CF78FD");

	UGAB_DefenderTeleportOut_C_Cancelled_50776FD24FD2018ECF8A639C63CF78FD_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_DefenderTeleportOut.GAB_DefenderTeleportOut_C.Triggered_50776FD24FD2018ECF8A639C63CF78FD
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)

void UGAB_DefenderTeleportOut_C::Triggered_50776FD24FD2018ECF8A639C63CF78FD(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_DefenderTeleportOut.GAB_DefenderTeleportOut_C.Triggered_50776FD24FD2018ECF8A639C63CF78FD");

	UGAB_DefenderTeleportOut_C_Triggered_50776FD24FD2018ECF8A639C63CF78FD_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_DefenderTeleportOut.GAB_DefenderTeleportOut_C.OnFinish_B28F01814A0C99AE17678C879A72D408
// (BlueprintCallable, BlueprintEvent)

void UGAB_DefenderTeleportOut_C::OnFinish_B28F01814A0C99AE17678C879A72D408()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_DefenderTeleportOut.GAB_DefenderTeleportOut_C.OnFinish_B28F01814A0C99AE17678C879A72D408");

	UGAB_DefenderTeleportOut_C_OnFinish_B28F01814A0C99AE17678C879A72D408_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_DefenderTeleportOut.GAB_DefenderTeleportOut_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     EventData                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGAB_DefenderTeleportOut_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_DefenderTeleportOut.GAB_DefenderTeleportOut_C.K2_ActivateAbilityFromEvent");

	UGAB_DefenderTeleportOut_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_DefenderTeleportOut.GAB_DefenderTeleportOut_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)

void UGAB_DefenderTeleportOut_C::K2_OnEndAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_DefenderTeleportOut.GAB_DefenderTeleportOut_C.K2_OnEndAbility");

	UGAB_DefenderTeleportOut_C_K2_OnEndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_DefenderTeleportOut.GAB_DefenderTeleportOut_C.SpawnDrone
// (BlueprintCallable, BlueprintEvent)

void UGAB_DefenderTeleportOut_C::SpawnDrone()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_DefenderTeleportOut.GAB_DefenderTeleportOut_C.SpawnDrone");

	UGAB_DefenderTeleportOut_C_SpawnDrone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_DefenderTeleportOut.GAB_DefenderTeleportOut_C.ExecuteUbergraph_GAB_DefenderTeleportOut
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGAB_DefenderTeleportOut_C::ExecuteUbergraph_GAB_DefenderTeleportOut(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_DefenderTeleportOut.GAB_DefenderTeleportOut_C.ExecuteUbergraph_GAB_DefenderTeleportOut");

	UGAB_DefenderTeleportOut_C_ExecuteUbergraph_GAB_DefenderTeleportOut_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
