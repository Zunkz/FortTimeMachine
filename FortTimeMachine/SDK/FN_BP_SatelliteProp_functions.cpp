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

// Function BP_SatelliteProp.BP_SatelliteProp_C.OnRep_DisableLight
// (BlueprintCallable, BlueprintEvent)

void ABP_SatelliteProp_C::OnRep_DisableLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SatelliteProp.BP_SatelliteProp_C.OnRep_DisableLight");

	ABP_SatelliteProp_C_OnRep_DisableLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SatelliteProp.BP_SatelliteProp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SatelliteProp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SatelliteProp.BP_SatelliteProp_C.UserConstructionScript");

	ABP_SatelliteProp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SatelliteProp.BP_SatelliteProp_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (Parm)

void ABP_SatelliteProp_C::OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SatelliteProp.BP_SatelliteProp_C.OnDeathServer");

	ABP_SatelliteProp_C_OnDeathServer_Params params;
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


// Function BP_SatelliteProp.BP_SatelliteProp_C.ExecuteUbergraph_BP_SatelliteProp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SatelliteProp_C::ExecuteUbergraph_BP_SatelliteProp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SatelliteProp.BP_SatelliteProp_C.ExecuteUbergraph_BP_SatelliteProp");

	ABP_SatelliteProp_C_ExecuteUbergraph_BP_SatelliteProp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
