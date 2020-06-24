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

// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.K2_CanActivateAbility
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo* ActorInfo                      (Parm)
// struct FGameplayTagContainer   RelevantTags                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGAB_HuskDwarfLeap_C::K2_CanActivateAbility(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayTagContainer* RelevantTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.K2_CanActivateAbility");

	UGAB_HuskDwarfLeap_C_K2_CanActivateAbility_Params params;
	params.ActorInfo = ActorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelevantTags != nullptr)
		*RelevantTags = params.RelevantTags;

	return params.ReturnValue;
}


// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.Cancelled_CBB06DD545B56595CFFF06B2E6D07800
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)

void UGAB_HuskDwarfLeap_C::Cancelled_CBB06DD545B56595CFFF06B2E6D07800(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.Cancelled_CBB06DD545B56595CFFF06B2E6D07800");

	UGAB_HuskDwarfLeap_C_Cancelled_CBB06DD545B56595CFFF06B2E6D07800_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.Targeted_CBB06DD545B56595CFFF06B2E6D07800
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)

void UGAB_HuskDwarfLeap_C::Targeted_CBB06DD545B56595CFFF06B2E6D07800(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.Targeted_CBB06DD545B56595CFFF06B2E6D07800");

	UGAB_HuskDwarfLeap_C_Targeted_CBB06DD545B56595CFFF06B2E6D07800_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnCancelled_48EF415F4112E88BA579DDB3E574B1B2
// (BlueprintCallable, BlueprintEvent)

void UGAB_HuskDwarfLeap_C::OnCancelled_48EF415F4112E88BA579DDB3E574B1B2()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnCancelled_48EF415F4112E88BA579DDB3E574B1B2");

	UGAB_HuskDwarfLeap_C_OnCancelled_48EF415F4112E88BA579DDB3E574B1B2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnInterrupted_48EF415F4112E88BA579DDB3E574B1B2
// (BlueprintCallable, BlueprintEvent)

void UGAB_HuskDwarfLeap_C::OnInterrupted_48EF415F4112E88BA579DDB3E574B1B2()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnInterrupted_48EF415F4112E88BA579DDB3E574B1B2");

	UGAB_HuskDwarfLeap_C_OnInterrupted_48EF415F4112E88BA579DDB3E574B1B2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnBlendOut_48EF415F4112E88BA579DDB3E574B1B2
// (BlueprintCallable, BlueprintEvent)

void UGAB_HuskDwarfLeap_C::OnBlendOut_48EF415F4112E88BA579DDB3E574B1B2()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnBlendOut_48EF415F4112E88BA579DDB3E574B1B2");

	UGAB_HuskDwarfLeap_C_OnBlendOut_48EF415F4112E88BA579DDB3E574B1B2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnCompleted_48EF415F4112E88BA579DDB3E574B1B2
// (BlueprintCallable, BlueprintEvent)

void UGAB_HuskDwarfLeap_C::OnCompleted_48EF415F4112E88BA579DDB3E574B1B2()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnCompleted_48EF415F4112E88BA579DDB3E574B1B2");

	UGAB_HuskDwarfLeap_C_OnCompleted_48EF415F4112E88BA579DDB3E574B1B2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnCancelled_0A17B1564ADD76C7619FAFA6E9826AEF
// (BlueprintCallable, BlueprintEvent)

void UGAB_HuskDwarfLeap_C::OnCancelled_0A17B1564ADD76C7619FAFA6E9826AEF()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnCancelled_0A17B1564ADD76C7619FAFA6E9826AEF");

	UGAB_HuskDwarfLeap_C_OnCancelled_0A17B1564ADD76C7619FAFA6E9826AEF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnInterrupted_0A17B1564ADD76C7619FAFA6E9826AEF
// (BlueprintCallable, BlueprintEvent)

void UGAB_HuskDwarfLeap_C::OnInterrupted_0A17B1564ADD76C7619FAFA6E9826AEF()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnInterrupted_0A17B1564ADD76C7619FAFA6E9826AEF");

	UGAB_HuskDwarfLeap_C_OnInterrupted_0A17B1564ADD76C7619FAFA6E9826AEF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnBlendOut_0A17B1564ADD76C7619FAFA6E9826AEF
// (BlueprintCallable, BlueprintEvent)

void UGAB_HuskDwarfLeap_C::OnBlendOut_0A17B1564ADD76C7619FAFA6E9826AEF()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnBlendOut_0A17B1564ADD76C7619FAFA6E9826AEF");

	UGAB_HuskDwarfLeap_C_OnBlendOut_0A17B1564ADD76C7619FAFA6E9826AEF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnCompleted_0A17B1564ADD76C7619FAFA6E9826AEF
// (BlueprintCallable, BlueprintEvent)

void UGAB_HuskDwarfLeap_C::OnCompleted_0A17B1564ADD76C7619FAFA6E9826AEF()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnCompleted_0A17B1564ADD76C7619FAFA6E9826AEF");

	UGAB_HuskDwarfLeap_C_OnCompleted_0A17B1564ADD76C7619FAFA6E9826AEF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnCancelled_8DE1E2DE4743A41F47677B999617BA52
// (BlueprintCallable, BlueprintEvent)

void UGAB_HuskDwarfLeap_C::OnCancelled_8DE1E2DE4743A41F47677B999617BA52()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnCancelled_8DE1E2DE4743A41F47677B999617BA52");

	UGAB_HuskDwarfLeap_C_OnCancelled_8DE1E2DE4743A41F47677B999617BA52_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnInterrupted_8DE1E2DE4743A41F47677B999617BA52
// (BlueprintCallable, BlueprintEvent)

void UGAB_HuskDwarfLeap_C::OnInterrupted_8DE1E2DE4743A41F47677B999617BA52()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnInterrupted_8DE1E2DE4743A41F47677B999617BA52");

	UGAB_HuskDwarfLeap_C_OnInterrupted_8DE1E2DE4743A41F47677B999617BA52_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnBlendOut_8DE1E2DE4743A41F47677B999617BA52
// (BlueprintCallable, BlueprintEvent)

void UGAB_HuskDwarfLeap_C::OnBlendOut_8DE1E2DE4743A41F47677B999617BA52()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnBlendOut_8DE1E2DE4743A41F47677B999617BA52");

	UGAB_HuskDwarfLeap_C_OnBlendOut_8DE1E2DE4743A41F47677B999617BA52_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnCompleted_8DE1E2DE4743A41F47677B999617BA52
// (BlueprintCallable, BlueprintEvent)

void UGAB_HuskDwarfLeap_C::OnCompleted_8DE1E2DE4743A41F47677B999617BA52()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnCompleted_8DE1E2DE4743A41F47677B999617BA52");

	UGAB_HuskDwarfLeap_C_OnCompleted_8DE1E2DE4743A41F47677B999617BA52_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnCancelled_666B7CB24770D78F310B59B3BCC27DDB
// (BlueprintCallable, BlueprintEvent)

void UGAB_HuskDwarfLeap_C::OnCancelled_666B7CB24770D78F310B59B3BCC27DDB()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnCancelled_666B7CB24770D78F310B59B3BCC27DDB");

	UGAB_HuskDwarfLeap_C_OnCancelled_666B7CB24770D78F310B59B3BCC27DDB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnInterrupted_666B7CB24770D78F310B59B3BCC27DDB
// (BlueprintCallable, BlueprintEvent)

void UGAB_HuskDwarfLeap_C::OnInterrupted_666B7CB24770D78F310B59B3BCC27DDB()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnInterrupted_666B7CB24770D78F310B59B3BCC27DDB");

	UGAB_HuskDwarfLeap_C_OnInterrupted_666B7CB24770D78F310B59B3BCC27DDB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnBlendOut_666B7CB24770D78F310B59B3BCC27DDB
// (BlueprintCallable, BlueprintEvent)

void UGAB_HuskDwarfLeap_C::OnBlendOut_666B7CB24770D78F310B59B3BCC27DDB()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnBlendOut_666B7CB24770D78F310B59B3BCC27DDB");

	UGAB_HuskDwarfLeap_C_OnBlendOut_666B7CB24770D78F310B59B3BCC27DDB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnCompleted_666B7CB24770D78F310B59B3BCC27DDB
// (BlueprintCallable, BlueprintEvent)

void UGAB_HuskDwarfLeap_C::OnCompleted_666B7CB24770D78F310B59B3BCC27DDB()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnCompleted_666B7CB24770D78F310B59B3BCC27DDB");

	UGAB_HuskDwarfLeap_C_OnCompleted_666B7CB24770D78F310B59B3BCC27DDB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAB_HuskDwarfLeap_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.K2_ActivateAbility");

	UGAB_HuskDwarfLeap_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)

void UGAB_HuskDwarfLeap_C::K2_OnEndAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.K2_OnEndAbility");

	UGAB_HuskDwarfLeap_C_K2_OnEndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.CommitAndEndAbility
// (BlueprintCallable, BlueprintEvent)

void UGAB_HuskDwarfLeap_C::CommitAndEndAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.CommitAndEndAbility");

	UGAB_HuskDwarfLeap_C_CommitAndEndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnPawnLanded
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UGAB_HuskDwarfLeap_C::OnPawnLanded(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnPawnLanded");

	UGAB_HuskDwarfLeap_C_OnPawnLanded_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnHitPawn
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SelfActor                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UGAB_HuskDwarfLeap_C::OnHitPawn(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnHitPawn");

	UGAB_HuskDwarfLeap_C_OnHitPawn_Params params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.UnbindEvents
// (BlueprintCallable, BlueprintEvent)

void UGAB_HuskDwarfLeap_C::UnbindEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.UnbindEvents");

	UGAB_HuskDwarfLeap_C_UnbindEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.BindEvents
// (BlueprintCallable, BlueprintEvent)

void UGAB_HuskDwarfLeap_C::BindEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.BindEvents");

	UGAB_HuskDwarfLeap_C_BindEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnReachedJumpApex
// (BlueprintCallable, BlueprintEvent)

void UGAB_HuskDwarfLeap_C::OnReachedJumpApex()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.OnReachedJumpApex");

	UGAB_HuskDwarfLeap_C_OnReachedJumpApex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.ResetDoOnce
// (BlueprintCallable, BlueprintEvent)

void UGAB_HuskDwarfLeap_C::ResetDoOnce()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.ResetDoOnce");

	UGAB_HuskDwarfLeap_C_ResetDoOnce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.ExecuteUbergraph_GAB_HuskDwarfLeap
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGAB_HuskDwarfLeap_C::ExecuteUbergraph_GAB_HuskDwarfLeap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskDwarfLeap.GAB_HuskDwarfLeap_C.ExecuteUbergraph_GAB_HuskDwarfLeap");

	UGAB_HuskDwarfLeap_C_ExecuteUbergraph_GAB_HuskDwarfLeap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
