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

// Function GAB_SurvivorMoveToSpawnSpot.GAB_SurvivorMoveToSpawnSpot_C.K2_CanActivateAbility
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo* ActorInfo                      (Parm)
// struct FGameplayTagContainer   RelevantTags                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGAB_SurvivorMoveToSpawnSpot_C::K2_CanActivateAbility(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayTagContainer* RelevantTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorMoveToSpawnSpot.GAB_SurvivorMoveToSpawnSpot_C.K2_CanActivateAbility");

	UGAB_SurvivorMoveToSpawnSpot_C_K2_CanActivateAbility_Params params;
	params.ActorInfo = ActorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelevantTags != nullptr)
		*RelevantTags = params.RelevantTags;

	return params.ReturnValue;
}


// Function GAB_SurvivorMoveToSpawnSpot.GAB_SurvivorMoveToSpawnSpot_C.OnCancelled_7777C42B4A977A34DD6FB2A03D4ED3A6
// (BlueprintCallable, BlueprintEvent)

void UGAB_SurvivorMoveToSpawnSpot_C::OnCancelled_7777C42B4A977A34DD6FB2A03D4ED3A6()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorMoveToSpawnSpot.GAB_SurvivorMoveToSpawnSpot_C.OnCancelled_7777C42B4A977A34DD6FB2A03D4ED3A6");

	UGAB_SurvivorMoveToSpawnSpot_C_OnCancelled_7777C42B4A977A34DD6FB2A03D4ED3A6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorMoveToSpawnSpot.GAB_SurvivorMoveToSpawnSpot_C.OnInterrupted_7777C42B4A977A34DD6FB2A03D4ED3A6
// (BlueprintCallable, BlueprintEvent)

void UGAB_SurvivorMoveToSpawnSpot_C::OnInterrupted_7777C42B4A977A34DD6FB2A03D4ED3A6()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorMoveToSpawnSpot.GAB_SurvivorMoveToSpawnSpot_C.OnInterrupted_7777C42B4A977A34DD6FB2A03D4ED3A6");

	UGAB_SurvivorMoveToSpawnSpot_C_OnInterrupted_7777C42B4A977A34DD6FB2A03D4ED3A6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorMoveToSpawnSpot.GAB_SurvivorMoveToSpawnSpot_C.OnComplete_7777C42B4A977A34DD6FB2A03D4ED3A6
// (BlueprintCallable, BlueprintEvent)

void UGAB_SurvivorMoveToSpawnSpot_C::OnComplete_7777C42B4A977A34DD6FB2A03D4ED3A6()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorMoveToSpawnSpot.GAB_SurvivorMoveToSpawnSpot_C.OnComplete_7777C42B4A977A34DD6FB2A03D4ED3A6");

	UGAB_SurvivorMoveToSpawnSpot_C_OnComplete_7777C42B4A977A34DD6FB2A03D4ED3A6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorMoveToSpawnSpot.GAB_SurvivorMoveToSpawnSpot_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAB_SurvivorMoveToSpawnSpot_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorMoveToSpawnSpot.GAB_SurvivorMoveToSpawnSpot_C.K2_ActivateAbility");

	UGAB_SurvivorMoveToSpawnSpot_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorMoveToSpawnSpot.GAB_SurvivorMoveToSpawnSpot_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)

void UGAB_SurvivorMoveToSpawnSpot_C::K2_OnEndAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorMoveToSpawnSpot.GAB_SurvivorMoveToSpawnSpot_C.K2_OnEndAbility");

	UGAB_SurvivorMoveToSpawnSpot_C_K2_OnEndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorMoveToSpawnSpot.GAB_SurvivorMoveToSpawnSpot_C.OnMoveFinished_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> Result                         (Parm, ZeroConstructor, IsPlainOldData)
// class AAIController*           AIController                   (Parm, ZeroConstructor, IsPlainOldData)

void UGAB_SurvivorMoveToSpawnSpot_C::OnMoveFinished_Event_1(TEnumAsByte<EPathFollowingResult> Result, class AAIController* AIController)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorMoveToSpawnSpot.GAB_SurvivorMoveToSpawnSpot_C.OnMoveFinished_Event_1");

	UGAB_SurvivorMoveToSpawnSpot_C_OnMoveFinished_Event_1_Params params;
	params.Result = Result;
	params.AIController = AIController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorMoveToSpawnSpot.GAB_SurvivorMoveToSpawnSpot_C.ExecuteUbergraph_GAB_SurvivorMoveToSpawnSpot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGAB_SurvivorMoveToSpawnSpot_C::ExecuteUbergraph_GAB_SurvivorMoveToSpawnSpot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorMoveToSpawnSpot.GAB_SurvivorMoveToSpawnSpot_C.ExecuteUbergraph_GAB_SurvivorMoveToSpawnSpot");

	UGAB_SurvivorMoveToSpawnSpot_C_ExecuteUbergraph_GAB_SurvivorMoveToSpawnSpot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
