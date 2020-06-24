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

// Function Mimic_Chest.Mimic_Chest_C.BlueprintGetInteractionString
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn**              InteractingPawn                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText AMimic_Chest_C::BlueprintGetInteractionString(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mimic_Chest.Mimic_Chest_C.BlueprintGetInteractionString");

	AMimic_Chest_C_BlueprintGetInteractionString_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Mimic_Chest.Mimic_Chest_C.OnRep_bBlockedByStairs?
// (BlueprintCallable, BlueprintEvent)

void AMimic_Chest_C::OnRep_bBlockedByStairs_()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mimic_Chest.Mimic_Chest_C.OnRep_bBlockedByStairs?");

	AMimic_Chest_C_OnRep_bBlockedByStairs__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mimic_Chest.Mimic_Chest_C.BlueprintCanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn**              InteractingPawn                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMimic_Chest_C::BlueprintCanInteract(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mimic_Chest.Mimic_Chest_C.BlueprintCanInteract");

	AMimic_Chest_C_BlueprintCanInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Mimic_Chest.Mimic_Chest_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMimic_Chest_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mimic_Chest.Mimic_Chest_C.UserConstructionScript");

	AMimic_Chest_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mimic_Chest.Mimic_Chest_C.Twitch__FinishedFunc
// (BlueprintEvent)

void AMimic_Chest_C::Twitch__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mimic_Chest.Mimic_Chest_C.Twitch__FinishedFunc");

	AMimic_Chest_C_Twitch__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mimic_Chest.Mimic_Chest_C.Twitch__UpdateFunc
// (BlueprintEvent)

void AMimic_Chest_C::Twitch__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mimic_Chest.Mimic_Chest_C.Twitch__UpdateFunc");

	AMimic_Chest_C_Twitch__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mimic_Chest.Mimic_Chest_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (Parm)

void AMimic_Chest_C::OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mimic_Chest.Mimic_Chest_C.OnDeathPlayEffects");

	AMimic_Chest_C_OnDeathPlayEffects_Params params;
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


// Function Mimic_Chest.Mimic_Chest_C.BlueprintOnBeginInteract
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void AMimic_Chest_C::BlueprintOnBeginInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mimic_Chest.Mimic_Chest_C.BlueprintOnBeginInteract");

	AMimic_Chest_C_BlueprintOnBeginInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mimic_Chest.Mimic_Chest_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMimic_Chest_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mimic_Chest.Mimic_Chest_C.ReceiveBeginPlay");

	AMimic_Chest_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mimic_Chest.Mimic_Chest_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn**              InteractingPawn                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AMimic_Chest_C::BlueprintOnInteract(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mimic_Chest.Mimic_Chest_C.BlueprintOnInteract");

	AMimic_Chest_C_BlueprintOnInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mimic_Chest.Mimic_Chest_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_18_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AMimic_Chest_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_18_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mimic_Chest.Mimic_Chest_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_18_ComponentBeginOverlapSignature__DelegateSignature");

	AMimic_Chest_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_18_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mimic_Chest.Mimic_Chest_C.ExecuteUbergraph_Mimic_Chest
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMimic_Chest_C::ExecuteUbergraph_Mimic_Chest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mimic_Chest.Mimic_Chest_C.ExecuteUbergraph_Mimic_Chest");

	AMimic_Chest_C_ExecuteUbergraph_Mimic_Chest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
