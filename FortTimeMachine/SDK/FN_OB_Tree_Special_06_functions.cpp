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

// Function OB_Tree_Special_06.OB_Tree_Special_06_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOB_Tree_Special_06_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_Tree_Special_06.OB_Tree_Special_06_C.UserConstructionScript");

	AOB_Tree_Special_06_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_Tree_Special_06.OB_Tree_Special_06_C.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (Parm)

void AOB_Tree_Special_06_C::OnDamagePlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_Tree_Special_06.OB_Tree_Special_06_C.OnDamagePlayEffects");

	AOB_Tree_Special_06_C_OnDamagePlayEffects_Params params;
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


// Function OB_Tree_Special_06.OB_Tree_Special_06_C.ExecuteUbergraph_OB_Tree_Special_06
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AOB_Tree_Special_06_C::ExecuteUbergraph_OB_Tree_Special_06(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_Tree_Special_06.OB_Tree_Special_06_C.ExecuteUbergraph_OB_Tree_Special_06");

	AOB_Tree_Special_06_C_ExecuteUbergraph_OB_Tree_Special_06_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
