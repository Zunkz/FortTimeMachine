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

// Function OB_Fire_Tree_Fort.OB_Fire_Tree_Fort_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOB_Fire_Tree_Fort_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_Fire_Tree_Fort.OB_Fire_Tree_Fort_C.UserConstructionScript");

	AOB_Fire_Tree_Fort_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_Fire_Tree_Fort.OB_Fire_Tree_Fort_C.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (Parm)

void AOB_Fire_Tree_Fort_C::OnDamagePlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_Fire_Tree_Fort.OB_Fire_Tree_Fort_C.OnDamagePlayEffects");

	AOB_Fire_Tree_Fort_C_OnDamagePlayEffects_Params params;
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


// Function OB_Fire_Tree_Fort.OB_Fire_Tree_Fort_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AOB_Fire_Tree_Fort_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_Fire_Tree_Fort.OB_Fire_Tree_Fort_C.ReceiveBeginPlay");

	AOB_Fire_Tree_Fort_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_Fire_Tree_Fort.OB_Fire_Tree_Fort_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (Parm)

void AOB_Fire_Tree_Fort_C::OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_Fire_Tree_Fort.OB_Fire_Tree_Fort_C.OnDeathServer");

	AOB_Fire_Tree_Fort_C_OnDeathServer_Params params;
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


// Function OB_Fire_Tree_Fort.OB_Fire_Tree_Fort_C.Treefire
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AOB_Fire_Tree_Fort_C::Treefire()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_Fire_Tree_Fort.OB_Fire_Tree_Fort_C.Treefire");

	AOB_Fire_Tree_Fort_C_Treefire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_Fire_Tree_Fort.OB_Fire_Tree_Fort_C.ExecuteUbergraph_OB_Fire_Tree_Fort
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AOB_Fire_Tree_Fort_C::ExecuteUbergraph_OB_Fire_Tree_Fort(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_Fire_Tree_Fort.OB_Fire_Tree_Fort_C.ExecuteUbergraph_OB_Fire_Tree_Fort");

	AOB_Fire_Tree_Fort_C_ExecuteUbergraph_OB_Fire_Tree_Fort_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
