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

// Function OB_EasterEggKnight.OB_EasterEggKnight_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOB_EasterEggKnight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_EasterEggKnight.OB_EasterEggKnight_C.UserConstructionScript");

	AOB_EasterEggKnight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_EasterEggKnight.OB_EasterEggKnight_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (Parm)

void AOB_EasterEggKnight_C::OnDamageServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_EasterEggKnight.OB_EasterEggKnight_C.OnDamageServer");

	AOB_EasterEggKnight_C_OnDamageServer_Params params;
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


// Function OB_EasterEggKnight.OB_EasterEggKnight_C.SpawnShrubbery
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AOB_EasterEggKnight_C::SpawnShrubbery()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_EasterEggKnight.OB_EasterEggKnight_C.SpawnShrubbery");

	AOB_EasterEggKnight_C_SpawnShrubbery_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_EasterEggKnight.OB_EasterEggKnight_C.ExecuteUbergraph_OB_EasterEggKnight
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AOB_EasterEggKnight_C::ExecuteUbergraph_OB_EasterEggKnight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_EasterEggKnight.OB_EasterEggKnight_C.ExecuteUbergraph_OB_EasterEggKnight");

	AOB_EasterEggKnight_C_ExecuteUbergraph_OB_EasterEggKnight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
