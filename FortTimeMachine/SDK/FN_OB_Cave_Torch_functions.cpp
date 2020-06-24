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

// Function OB_Cave_Torch.OB_Cave_Torch_C.OnRep_destroy
// (BlueprintCallable, BlueprintEvent)

void AOB_Cave_Torch_C::OnRep_destroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_Cave_Torch.OB_Cave_Torch_C.OnRep_destroy");

	AOB_Cave_Torch_C_OnRep_destroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_Cave_Torch.OB_Cave_Torch_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AOB_Cave_Torch_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_Cave_Torch.OB_Cave_Torch_C.UserConstructionScript");

	AOB_Cave_Torch_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_Cave_Torch.OB_Cave_Torch_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AOB_Cave_Torch_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_Cave_Torch.OB_Cave_Torch_C.ReceiveBeginPlay");

	AOB_Cave_Torch_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_Cave_Torch.OB_Cave_Torch_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (Parm)

void AOB_Cave_Torch_C::OnDamageServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_Cave_Torch.OB_Cave_Torch_C.OnDamageServer");

	AOB_Cave_Torch_C_OnDamageServer_Params params;
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


// Function OB_Cave_Torch.OB_Cave_Torch_C.CheckSpawnFireflies
// (BlueprintCallable, BlueprintEvent)

void AOB_Cave_Torch_C::CheckSpawnFireflies()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_Cave_Torch.OB_Cave_Torch_C.CheckSpawnFireflies");

	AOB_Cave_Torch_C_CheckSpawnFireflies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_Cave_Torch.OB_Cave_Torch_C.ExecuteUbergraph_OB_Cave_Torch
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AOB_Cave_Torch_C::ExecuteUbergraph_OB_Cave_Torch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_Cave_Torch.OB_Cave_Torch_C.ExecuteUbergraph_OB_Cave_Torch");

	AOB_Cave_Torch_C_ExecuteUbergraph_OB_Cave_Torch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
