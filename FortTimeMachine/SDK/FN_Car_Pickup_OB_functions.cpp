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

// Function Car_Pickup_OB.Car_Pickup_OB_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACar_Pickup_OB_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Pickup_OB.Car_Pickup_OB_C.UserConstructionScript");

	ACar_Pickup_OB_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Pickup_OB.Car_Pickup_OB_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACar_Pickup_OB_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Pickup_OB.Car_Pickup_OB_C.ReceiveBeginPlay");

	ACar_Pickup_OB_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Car_Pickup_OB.Car_Pickup_OB_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (Parm)

void ACar_Pickup_OB_C::OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Pickup_OB.Car_Pickup_OB_C.OnDeathServer");

	ACar_Pickup_OB_C_OnDeathServer_Params params;
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


// Function Car_Pickup_OB.Car_Pickup_OB_C.ExecuteUbergraph_Car_Pickup_OB
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACar_Pickup_OB_C::ExecuteUbergraph_Car_Pickup_OB(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Car_Pickup_OB.Car_Pickup_OB_C.ExecuteUbergraph_Car_Pickup_OB");

	ACar_Pickup_OB_C_ExecuteUbergraph_Car_Pickup_OB_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
