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

// Function BP_Cow_Cutout.BP_Cow_Cutout_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Cow_Cutout_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cow_Cutout.BP_Cow_Cutout_C.UserConstructionScript");

	ABP_Cow_Cutout_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Cow_Cutout.BP_Cow_Cutout_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (Parm)

void ABP_Cow_Cutout_C::OnDamageServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cow_Cutout.BP_Cow_Cutout_C.OnDamageServer");

	ABP_Cow_Cutout_C_OnDamageServer_Params params;
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


// Function BP_Cow_Cutout.BP_Cow_Cutout_C.PlaySound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Cow_Cutout_C::PlaySound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cow_Cutout.BP_Cow_Cutout_C.PlaySound");

	ABP_Cow_Cutout_C_PlaySound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Cow_Cutout.BP_Cow_Cutout_C.ExecuteUbergraph_BP_Cow_Cutout
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Cow_Cutout_C::ExecuteUbergraph_BP_Cow_Cutout(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cow_Cutout.BP_Cow_Cutout_C.ExecuteUbergraph_BP_Cow_Cutout");

	ABP_Cow_Cutout_C_ExecuteUbergraph_BP_Cow_Cutout_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
