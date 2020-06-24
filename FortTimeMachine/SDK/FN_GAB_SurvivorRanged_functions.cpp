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

// Function GAB_SurvivorRanged.GAB_SurvivorRanged_C.K2_CanActivateAbility
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo* ActorInfo                      (Parm)
// struct FGameplayTagContainer   RelevantTags                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGAB_SurvivorRanged_C::K2_CanActivateAbility(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayTagContainer* RelevantTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorRanged.GAB_SurvivorRanged_C.K2_CanActivateAbility");

	UGAB_SurvivorRanged_C_K2_CanActivateAbility_Params params;
	params.ActorInfo = ActorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelevantTags != nullptr)
		*RelevantTags = params.RelevantTags;

	return params.ReturnValue;
}


// Function GAB_SurvivorRanged.GAB_SurvivorRanged_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)

void UGAB_SurvivorRanged_C::K2_OnEndAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorRanged.GAB_SurvivorRanged_C.K2_OnEndAbility");

	UGAB_SurvivorRanged_C_K2_OnEndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorRanged.GAB_SurvivorRanged_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAB_SurvivorRanged_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorRanged.GAB_SurvivorRanged_C.K2_ActivateAbility");

	UGAB_SurvivorRanged_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorRanged.GAB_SurvivorRanged_C.FireSingleBurst
// (BlueprintCallable, BlueprintEvent)

void UGAB_SurvivorRanged_C::FireSingleBurst()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorRanged.GAB_SurvivorRanged_C.FireSingleBurst");

	UGAB_SurvivorRanged_C_FireSingleBurst_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorRanged.GAB_SurvivorRanged_C.InitializeWeaponValues
// (BlueprintCallable, BlueprintEvent)

void UGAB_SurvivorRanged_C::InitializeWeaponValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorRanged.GAB_SurvivorRanged_C.InitializeWeaponValues");

	UGAB_SurvivorRanged_C_InitializeWeaponValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorRanged.GAB_SurvivorRanged_C.OnDied_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, IsPlainOldData)
// class UPrimitiveComponent*     FHitComponent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Momentum                       (Parm, IsPlainOldData)

void UGAB_SurvivorRanged_C::OnDied_Event_1(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorRanged.GAB_SurvivorRanged_C.OnDied_Event_1");

	UGAB_SurvivorRanged_C_OnDied_Event_1_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.HitLocation = HitLocation;
	params.FHitComponent = FHitComponent;
	params.BoneName = BoneName;
	params.Momentum = Momentum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorRanged.GAB_SurvivorRanged_C.ExecuteUbergraph_GAB_SurvivorRanged
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGAB_SurvivorRanged_C::ExecuteUbergraph_GAB_SurvivorRanged(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorRanged.GAB_SurvivorRanged_C.ExecuteUbergraph_GAB_SurvivorRanged");

	UGAB_SurvivorRanged_C_ExecuteUbergraph_GAB_SurvivorRanged_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
