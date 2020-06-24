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

// Function OB_Tractor_Special.OB_Tractor_Special_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOB_Tractor_Special_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_Tractor_Special.OB_Tractor_Special_C.UserConstructionScript");

	AOB_Tractor_Special_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_Tractor_Special.OB_Tractor_Special_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AOB_Tractor_Special_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_Tractor_Special.OB_Tractor_Special_C.ReceiveBeginPlay");

	AOB_Tractor_Special_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_Tractor_Special.OB_Tractor_Special_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (Parm)

void AOB_Tractor_Special_C::OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_Tractor_Special.OB_Tractor_Special_C.OnDeathServer");

	AOB_Tractor_Special_C_OnDeathServer_Params params;
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


// Function OB_Tractor_Special.OB_Tractor_Special_C.ExecuteUbergraph_OB_Tractor_Special
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AOB_Tractor_Special_C::ExecuteUbergraph_OB_Tractor_Special(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_Tractor_Special.OB_Tractor_Special_C.ExecuteUbergraph_OB_Tractor_Special");

	AOB_Tractor_Special_C_ExecuteUbergraph_OB_Tractor_Special_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
