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

// Function GAB_DefenderTeleportIn.GAB_DefenderTeleportIn_C.Completed_AB4032854FBBB4B8A040B49C764FCC63
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)

void UGAB_DefenderTeleportIn_C::Completed_AB4032854FBBB4B8A040B49C764FCC63(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_DefenderTeleportIn.GAB_DefenderTeleportIn_C.Completed_AB4032854FBBB4B8A040B49C764FCC63");

	UGAB_DefenderTeleportIn_C_Completed_AB4032854FBBB4B8A040B49C764FCC63_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_DefenderTeleportIn.GAB_DefenderTeleportIn_C.Cancelled_AB4032854FBBB4B8A040B49C764FCC63
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)

void UGAB_DefenderTeleportIn_C::Cancelled_AB4032854FBBB4B8A040B49C764FCC63(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_DefenderTeleportIn.GAB_DefenderTeleportIn_C.Cancelled_AB4032854FBBB4B8A040B49C764FCC63");

	UGAB_DefenderTeleportIn_C_Cancelled_AB4032854FBBB4B8A040B49C764FCC63_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_DefenderTeleportIn.GAB_DefenderTeleportIn_C.Triggered_AB4032854FBBB4B8A040B49C764FCC63
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)

void UGAB_DefenderTeleportIn_C::Triggered_AB4032854FBBB4B8A040B49C764FCC63(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_DefenderTeleportIn.GAB_DefenderTeleportIn_C.Triggered_AB4032854FBBB4B8A040B49C764FCC63");

	UGAB_DefenderTeleportIn_C_Triggered_AB4032854FBBB4B8A040B49C764FCC63_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_DefenderTeleportIn.GAB_DefenderTeleportIn_C.OnFinish_77E3180049F2EF461DEF169ADDF46A93
// (BlueprintCallable, BlueprintEvent)

void UGAB_DefenderTeleportIn_C::OnFinish_77E3180049F2EF461DEF169ADDF46A93()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_DefenderTeleportIn.GAB_DefenderTeleportIn_C.OnFinish_77E3180049F2EF461DEF169ADDF46A93");

	UGAB_DefenderTeleportIn_C_OnFinish_77E3180049F2EF461DEF169ADDF46A93_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_DefenderTeleportIn.GAB_DefenderTeleportIn_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)

void UGAB_DefenderTeleportIn_C::K2_OnEndAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_DefenderTeleportIn.GAB_DefenderTeleportIn_C.K2_OnEndAbility");

	UGAB_DefenderTeleportIn_C_K2_OnEndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_DefenderTeleportIn.GAB_DefenderTeleportIn_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     EventData                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGAB_DefenderTeleportIn_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_DefenderTeleportIn.GAB_DefenderTeleportIn_C.K2_ActivateAbilityFromEvent");

	UGAB_DefenderTeleportIn_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_DefenderTeleportIn.GAB_DefenderTeleportIn_C.FinishTeleportIn
// (BlueprintCallable, BlueprintEvent)

void UGAB_DefenderTeleportIn_C::FinishTeleportIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_DefenderTeleportIn.GAB_DefenderTeleportIn_C.FinishTeleportIn");

	UGAB_DefenderTeleportIn_C_FinishTeleportIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_DefenderTeleportIn.GAB_DefenderTeleportIn_C.RetryTeleportIn
// (BlueprintCallable, BlueprintEvent)

void UGAB_DefenderTeleportIn_C::RetryTeleportIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_DefenderTeleportIn.GAB_DefenderTeleportIn_C.RetryTeleportIn");

	UGAB_DefenderTeleportIn_C_RetryTeleportIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_DefenderTeleportIn.GAB_DefenderTeleportIn_C.OnQueryFinishedEvent_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper* QueryInstance                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEnvQueryStatus>   QueryStatus                    (Parm, ZeroConstructor, IsPlainOldData)

void UGAB_DefenderTeleportIn_C::OnQueryFinishedEvent_Event_1(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_DefenderTeleportIn.GAB_DefenderTeleportIn_C.OnQueryFinishedEvent_Event_1");

	UGAB_DefenderTeleportIn_C_OnQueryFinishedEvent_Event_1_Params params;
	params.QueryInstance = QueryInstance;
	params.QueryStatus = QueryStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_DefenderTeleportIn.GAB_DefenderTeleportIn_C.ExecuteUbergraph_GAB_DefenderTeleportIn
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGAB_DefenderTeleportIn_C::ExecuteUbergraph_GAB_DefenderTeleportIn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_DefenderTeleportIn.GAB_DefenderTeleportIn_C.ExecuteUbergraph_GAB_DefenderTeleportIn");

	UGAB_DefenderTeleportIn_C_ExecuteUbergraph_GAB_DefenderTeleportIn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
