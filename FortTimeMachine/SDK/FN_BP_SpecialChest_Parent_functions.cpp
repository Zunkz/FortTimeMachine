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

// Function BP_SpecialChest_Parent.BP_SpecialChest_Parent_C.OnRep_ShowArrowHint
// (BlueprintCallable, BlueprintEvent)

void ABP_SpecialChest_Parent_C::OnRep_ShowArrowHint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialChest_Parent.BP_SpecialChest_Parent_C.OnRep_ShowArrowHint");

	ABP_SpecialChest_Parent_C_OnRep_ShowArrowHint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpecialChest_Parent.BP_SpecialChest_Parent_C.OnRep_IsSearched
// (BlueprintCallable, BlueprintEvent)

void ABP_SpecialChest_Parent_C::OnRep_IsSearched()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialChest_Parent.BP_SpecialChest_Parent_C.OnRep_IsSearched");

	ABP_SpecialChest_Parent_C_OnRep_IsSearched_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpecialChest_Parent.BP_SpecialChest_Parent_C.BlueprintCanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn**              InteractingPawn                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_SpecialChest_Parent_C::BlueprintCanInteract(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialChest_Parent.BP_SpecialChest_Parent_C.BlueprintCanInteract");

	ABP_SpecialChest_Parent_C_BlueprintCanInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SpecialChest_Parent.BP_SpecialChest_Parent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SpecialChest_Parent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialChest_Parent.BP_SpecialChest_Parent_C.UserConstructionScript");

	ABP_SpecialChest_Parent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpecialChest_Parent.BP_SpecialChest_Parent_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn**              InteractingPawn                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpecialChest_Parent_C::BlueprintOnInteract(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialChest_Parent.BP_SpecialChest_Parent_C.BlueprintOnInteract");

	ABP_SpecialChest_Parent_C_BlueprintOnInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpecialChest_Parent.BP_SpecialChest_Parent_C.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (Parm)

void ABP_SpecialChest_Parent_C::OnDamagePlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialChest_Parent.BP_SpecialChest_Parent_C.OnDamagePlayEffects");

	ABP_SpecialChest_Parent_C_OnDamagePlayEffects_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpecialChest_Parent.BP_SpecialChest_Parent_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (Parm)

void ABP_SpecialChest_Parent_C::OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialChest_Parent.BP_SpecialChest_Parent_C.OnDeathPlayEffects");

	ABP_SpecialChest_Parent_C_OnDeathPlayEffects_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpecialChest_Parent.BP_SpecialChest_Parent_C.BlueprintOnBeginInteract
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ABP_SpecialChest_Parent_C::BlueprintOnBeginInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialChest_Parent.BP_SpecialChest_Parent_C.BlueprintOnBeginInteract");

	ABP_SpecialChest_Parent_C_BlueprintOnBeginInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpecialChest_Parent.BP_SpecialChest_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SpecialChest_Parent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialChest_Parent.BP_SpecialChest_Parent_C.ReceiveBeginPlay");

	ABP_SpecialChest_Parent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpecialChest_Parent.BP_SpecialChest_Parent_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (Parm)

void ABP_SpecialChest_Parent_C::OnDamageServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialChest_Parent.BP_SpecialChest_Parent_C.OnDamageServer");

	ABP_SpecialChest_Parent_C_OnDamageServer_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpecialChest_Parent.BP_SpecialChest_Parent_C.Searched
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_SpecialChest_Parent_C::Searched()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialChest_Parent.BP_SpecialChest_Parent_C.Searched");

	ABP_SpecialChest_Parent_C_Searched_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpecialChest_Parent.BP_SpecialChest_Parent_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_SpecialChest_Parent_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialChest_Parent.BP_SpecialChest_Parent_C.ReceiveDestroyed");

	ABP_SpecialChest_Parent_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpecialChest_Parent.BP_SpecialChest_Parent_C.ExecuteUbergraph_BP_SpecialChest_Parent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpecialChest_Parent_C::ExecuteUbergraph_BP_SpecialChest_Parent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialChest_Parent.BP_SpecialChest_Parent_C.ExecuteUbergraph_BP_SpecialChest_Parent");

	ABP_SpecialChest_Parent_C_ExecuteUbergraph_BP_SpecialChest_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
