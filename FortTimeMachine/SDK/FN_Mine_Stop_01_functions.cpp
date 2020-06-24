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

// Function Mine_Stop_01.Mine_Stop_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMine_Stop_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mine_Stop_01.Mine_Stop_01_C.UserConstructionScript");

	AMine_Stop_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mine_Stop_01.Mine_Stop_01_C.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (Parm, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (Parm)

void AMine_Stop_01_C::OnDamagePlayEffects(float* Damage, struct FVector* Momentum, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext, struct FGameplayTagContainer* DamageTags, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mine_Stop_01.Mine_Stop_01_C.OnDamagePlayEffects");

	AMine_Stop_01_C_OnDamagePlayEffects_Params params;
	params.Damage = Damage;
	params.Momentum = Momentum;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageTags != nullptr)
		*DamageTags = params.DamageTags;
	if (HitInfo != nullptr)
		*HitInfo = params.HitInfo;
}


// Function Mine_Stop_01.Mine_Stop_01_C.ExecuteUbergraph_Mine_Stop_01
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMine_Stop_01_C::ExecuteUbergraph_Mine_Stop_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mine_Stop_01.Mine_Stop_01_C.ExecuteUbergraph_Mine_Stop_01");

	AMine_Stop_01_C_ExecuteUbergraph_Mine_Stop_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
