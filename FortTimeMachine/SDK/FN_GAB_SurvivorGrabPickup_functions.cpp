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

// Function GAB_SurvivorGrabPickup.GAB_SurvivorGrabPickup_C.K2_CanActivateAbility
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo* ActorInfo                      (Parm)
// struct FGameplayTagContainer   RelevantTags                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGAB_SurvivorGrabPickup_C::K2_CanActivateAbility(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayTagContainer* RelevantTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorGrabPickup.GAB_SurvivorGrabPickup_C.K2_CanActivateAbility");

	UGAB_SurvivorGrabPickup_C_K2_CanActivateAbility_Params params;
	params.ActorInfo = ActorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelevantTags != nullptr)
		*RelevantTags = params.RelevantTags;

	return params.ReturnValue;
}


// Function GAB_SurvivorGrabPickup.GAB_SurvivorGrabPickup_C.OnCancelled_B3CE3AFB4C57F932694B73A2B89DEE1C
// (BlueprintCallable, BlueprintEvent)

void UGAB_SurvivorGrabPickup_C::OnCancelled_B3CE3AFB4C57F932694B73A2B89DEE1C()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorGrabPickup.GAB_SurvivorGrabPickup_C.OnCancelled_B3CE3AFB4C57F932694B73A2B89DEE1C");

	UGAB_SurvivorGrabPickup_C_OnCancelled_B3CE3AFB4C57F932694B73A2B89DEE1C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorGrabPickup.GAB_SurvivorGrabPickup_C.OnInterrupted_B3CE3AFB4C57F932694B73A2B89DEE1C
// (BlueprintCallable, BlueprintEvent)

void UGAB_SurvivorGrabPickup_C::OnInterrupted_B3CE3AFB4C57F932694B73A2B89DEE1C()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorGrabPickup.GAB_SurvivorGrabPickup_C.OnInterrupted_B3CE3AFB4C57F932694B73A2B89DEE1C");

	UGAB_SurvivorGrabPickup_C_OnInterrupted_B3CE3AFB4C57F932694B73A2B89DEE1C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorGrabPickup.GAB_SurvivorGrabPickup_C.OnComplete_B3CE3AFB4C57F932694B73A2B89DEE1C
// (BlueprintCallable, BlueprintEvent)

void UGAB_SurvivorGrabPickup_C::OnComplete_B3CE3AFB4C57F932694B73A2B89DEE1C()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorGrabPickup.GAB_SurvivorGrabPickup_C.OnComplete_B3CE3AFB4C57F932694B73A2B89DEE1C");

	UGAB_SurvivorGrabPickup_C_OnComplete_B3CE3AFB4C57F932694B73A2B89DEE1C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorGrabPickup.GAB_SurvivorGrabPickup_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAB_SurvivorGrabPickup_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorGrabPickup.GAB_SurvivorGrabPickup_C.K2_ActivateAbility");

	UGAB_SurvivorGrabPickup_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorGrabPickup.GAB_SurvivorGrabPickup_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)

void UGAB_SurvivorGrabPickup_C::K2_OnEndAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorGrabPickup.GAB_SurvivorGrabPickup_C.K2_OnEndAbility");

	UGAB_SurvivorGrabPickup_C_K2_OnEndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorGrabPickup.GAB_SurvivorGrabPickup_C.OnEndPlay_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void UGAB_SurvivorGrabPickup_C::OnEndPlay_Event_1(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorGrabPickup.GAB_SurvivorGrabPickup_C.OnEndPlay_Event_1");

	UGAB_SurvivorGrabPickup_C_OnEndPlay_Event_1_Params params;
	params.Actor = Actor;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorGrabPickup.GAB_SurvivorGrabPickup_C.ExecuteUbergraph_GAB_SurvivorGrabPickup
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGAB_SurvivorGrabPickup_C::ExecuteUbergraph_GAB_SurvivorGrabPickup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorGrabPickup.GAB_SurvivorGrabPickup_C.ExecuteUbergraph_GAB_SurvivorGrabPickup");

	UGAB_SurvivorGrabPickup_C_ExecuteUbergraph_GAB_SurvivorGrabPickup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
