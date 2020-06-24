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

// Function B_BGA_SentryGun.B_BGA_SentryGun_C.UpdateAmmoCountMID
// (Public, BlueprintCallable, BlueprintEvent)

void AB_BGA_SentryGun_C::UpdateAmmoCountMID()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_SentryGun.B_BGA_SentryGun_C.UpdateAmmoCountMID");

	AB_BGA_SentryGun_C_UpdateAmmoCountMID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_SentryGun.B_BGA_SentryGun_C.TempOnPlaceStatBuff
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_BGA_SentryGun_C::TempOnPlaceStatBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_SentryGun.B_BGA_SentryGun_C.TempOnPlaceStatBuff");

	AB_BGA_SentryGun_C_TempOnPlaceStatBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_SentryGun.B_BGA_SentryGun_C.OnRep_IsDeployed
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_BGA_SentryGun_C::OnRep_IsDeployed()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_SentryGun.B_BGA_SentryGun_C.OnRep_IsDeployed");

	AB_BGA_SentryGun_C_OnRep_IsDeployed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_SentryGun.B_BGA_SentryGun_C.Is Pawn Inside Pitch Limits
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInsidePitchLimits             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_BGA_SentryGun_C::Is_Pawn_Inside_Pitch_Limits(class AFortPawn* Pawn, bool* bInsidePitchLimits)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_SentryGun.B_BGA_SentryGun_C.Is Pawn Inside Pitch Limits");

	AB_BGA_SentryGun_C_Is_Pawn_Inside_Pitch_Limits_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bInsidePitchLimits != nullptr)
		*bInsidePitchLimits = params.bInsidePitchLimits;
}


// Function B_BGA_SentryGun.B_BGA_SentryGun_C.IsPawnInsideYawLimits
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInsideYawLimits               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_BGA_SentryGun_C::IsPawnInsideYawLimits(class AFortPawn* Pawn, bool* bInsideYawLimits)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_SentryGun.B_BGA_SentryGun_C.IsPawnInsideYawLimits");

	AB_BGA_SentryGun_C_IsPawnInsideYawLimits_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bInsideYawLimits != nullptr)
		*bInsideYawLimits = params.bInsideYawLimits;
}


// Function B_BGA_SentryGun.B_BGA_SentryGun_C.IsValidTarget
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               PotentialTarget                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeSimpleRangeCheck       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeFiringLimitCheck       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeObstructionCheck       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValidTarget                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_BGA_SentryGun_C::IsValidTarget(class AFortPawn* PotentialTarget, bool bIncludeSimpleRangeCheck, bool bIncludeFiringLimitCheck, bool bIncludeObstructionCheck, bool* bValidTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_SentryGun.B_BGA_SentryGun_C.IsValidTarget");

	AB_BGA_SentryGun_C_IsValidTarget_Params params;
	params.PotentialTarget = PotentialTarget;
	params.bIncludeSimpleRangeCheck = bIncludeSimpleRangeCheck;
	params.bIncludeFiringLimitCheck = bIncludeFiringLimitCheck;
	params.bIncludeObstructionCheck = bIncludeObstructionCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValidTarget != nullptr)
		*bValidTarget = params.bValidTarget;
}


// Function B_BGA_SentryGun.B_BGA_SentryGun_C.OnPotentialTargetUntouched
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               UntouchedPotentialTarget       (Parm, ZeroConstructor, IsPlainOldData)

void AB_BGA_SentryGun_C::OnPotentialTargetUntouched(class AFortPawn* UntouchedPotentialTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_SentryGun.B_BGA_SentryGun_C.OnPotentialTargetUntouched");

	AB_BGA_SentryGun_C_OnPotentialTargetUntouched_Params params;
	params.UntouchedPotentialTarget = UntouchedPotentialTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_SentryGun.B_BGA_SentryGun_C.OnNewPotentialTargetTouched
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               PotentialTargetPawn            (Parm, ZeroConstructor, IsPlainOldData)

void AB_BGA_SentryGun_C::OnNewPotentialTargetTouched(class AFortPawn* PotentialTargetPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_SentryGun.B_BGA_SentryGun_C.OnNewPotentialTargetTouched");

	AB_BGA_SentryGun_C_OnNewPotentialTargetTouched_Params params;
	params.PotentialTargetPawn = PotentialTargetPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_SentryGun.B_BGA_SentryGun_C.CalcDesiredAngle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InitialRelativeAngle           (Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentRelativeAngle           (Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleOffset                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleClamp                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          DesiredAngle                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_BGA_SentryGun_C::CalcDesiredAngle(float InitialRelativeAngle, float CurrentRelativeAngle, float AngleOffset, float AngleClamp, float* DesiredAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_SentryGun.B_BGA_SentryGun_C.CalcDesiredAngle");

	AB_BGA_SentryGun_C_CalcDesiredAngle_Params params;
	params.InitialRelativeAngle = InitialRelativeAngle;
	params.CurrentRelativeAngle = CurrentRelativeAngle;
	params.AngleOffset = AngleOffset;
	params.AngleClamp = AngleClamp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredAngle != nullptr)
		*DesiredAngle = params.DesiredAngle;
}


// Function B_BGA_SentryGun.B_BGA_SentryGun_C.HasAmmo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           HasAmmo                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_BGA_SentryGun_C::HasAmmo(bool* HasAmmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_SentryGun.B_BGA_SentryGun_C.HasAmmo");

	AB_BGA_SentryGun_C_HasAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasAmmo != nullptr)
		*HasAmmo = params.HasAmmo;
}


// Function B_BGA_SentryGun.B_BGA_SentryGun_C.OnRep_CurAmmoCount
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_SentryGun_C::OnRep_CurAmmoCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_SentryGun.B_BGA_SentryGun_C.OnRep_CurAmmoCount");

	AB_BGA_SentryGun_C_OnRep_CurAmmoCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_SentryGun.B_BGA_SentryGun_C.ShouldFire
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldFire                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_BGA_SentryGun_C::ShouldFire(bool* ShouldFire)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_SentryGun.B_BGA_SentryGun_C.ShouldFire");

	AB_BGA_SentryGun_C_ShouldFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldFire != nullptr)
		*ShouldFire = params.ShouldFire;
}


// Function B_BGA_SentryGun.B_BGA_SentryGun_C.ClearTargetAcquisitionTimer
// (Protected, BlueprintCallable, BlueprintEvent)

void AB_BGA_SentryGun_C::ClearTargetAcquisitionTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_SentryGun.B_BGA_SentryGun_C.ClearTargetAcquisitionTimer");

	AB_BGA_SentryGun_C_ClearTargetAcquisitionTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_SentryGun.B_BGA_SentryGun_C.ClearFiringTimer
// (Protected, BlueprintCallable, BlueprintEvent)

void AB_BGA_SentryGun_C::ClearFiringTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_SentryGun.B_BGA_SentryGun_C.ClearFiringTimer");

	AB_BGA_SentryGun_C_ClearFiringTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_SentryGun.B_BGA_SentryGun_C.SpawnImpactEffects
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (Parm, IsPlainOldData)

void AB_BGA_SentryGun_C::SpawnImpactEffects(const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_SentryGun.B_BGA_SentryGun_C.SpawnImpactEffects");

	AB_BGA_SentryGun_C_SpawnImpactEffects_Params params;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_SentryGun.B_BGA_SentryGun_C.SpawnTracer
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (Parm, IsPlainOldData)

void AB_BGA_SentryGun_C::SpawnTracer(const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_SentryGun.B_BGA_SentryGun_C.SpawnTracer");

	AB_BGA_SentryGun_C_SpawnTracer_Params params;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_SentryGun.B_BGA_SentryGun_C.PerformGunRotation
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  LookAtActor                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AB_BGA_SentryGun_C::PerformGunRotation(class AActor* LookAtActor, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_SentryGun.B_BGA_SentryGun_C.PerformGunRotation");

	AB_BGA_SentryGun_C_PerformGunRotation_Params params;
	params.LookAtActor = LookAtActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_SentryGun.B_BGA_SentryGun_C.SetTargetAcquisitionTimer
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_BGA_SentryGun_C::SetTargetAcquisitionTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_SentryGun.B_BGA_SentryGun_C.SetTargetAcquisitionTimer");

	AB_BGA_SentryGun_C_SetTargetAcquisitionTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_SentryGun.B_BGA_SentryGun_C.SetFiringTimer
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_BGA_SentryGun_C::SetFiringTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_SentryGun.B_BGA_SentryGun_C.SetFiringTimer");

	AB_BGA_SentryGun_C_SetFiringTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_SentryGun.B_BGA_SentryGun_C.AttemptFire
// (Public, BlueprintCallable, BlueprintEvent)

void AB_BGA_SentryGun_C::AttemptFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_SentryGun.B_BGA_SentryGun_C.AttemptFire");

	AB_BGA_SentryGun_C_AttemptFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_SentryGun.B_BGA_SentryGun_C.AttemptAcquireTarget
// (Public, BlueprintCallable, BlueprintEvent)

void AB_BGA_SentryGun_C::AttemptAcquireTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_SentryGun.B_BGA_SentryGun_C.AttemptAcquireTarget");

	AB_BGA_SentryGun_C_AttemptAcquireTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_SentryGun.B_BGA_SentryGun_C.SetTrackingTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               PawnToTrack                    (Parm, ZeroConstructor, IsPlainOldData)

void AB_BGA_SentryGun_C::SetTrackingTarget(class AFortPawn* PawnToTrack)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_SentryGun.B_BGA_SentryGun_C.SetTrackingTarget");

	AB_BGA_SentryGun_C_SetTrackingTarget_Params params;
	params.PawnToTrack = PawnToTrack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_SentryGun.B_BGA_SentryGun_C.GetTargetingSourceTransform
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EFortAbilityTargetingSource*   Source                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform AB_BGA_SentryGun_C::GetTargetingSourceTransform(EFortAbilityTargetingSource* Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_SentryGun.B_BGA_SentryGun_C.GetTargetingSourceTransform");

	AB_BGA_SentryGun_C_GetTargetingSourceTransform_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_BGA_SentryGun.B_BGA_SentryGun_C.InitializeMIDs
// (Public, BlueprintCallable, BlueprintEvent)

void AB_BGA_SentryGun_C::InitializeMIDs()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_SentryGun.B_BGA_SentryGun_C.InitializeMIDs");

	AB_BGA_SentryGun_C_InitializeMIDs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_SentryGun.B_BGA_SentryGun_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_BGA_SentryGun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_SentryGun.B_BGA_SentryGun_C.UserConstructionScript");

	AB_BGA_SentryGun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_SentryGun.B_BGA_SentryGun_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_BGA_SentryGun_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_SentryGun.B_BGA_SentryGun_C.ReceiveBeginPlay");

	AB_BGA_SentryGun_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_SentryGun.B_BGA_SentryGun_C.GameplayCue.Impact.Physical
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (Parm)

void AB_BGA_SentryGun_C::GameplayCue_Impact_Physical(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_SentryGun.B_BGA_SentryGun_C.GameplayCue.Impact.Physical");

	AB_BGA_SentryGun_C_GameplayCue_Impact_Physical_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_SentryGun.B_BGA_SentryGun_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AB_BGA_SentryGun_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_SentryGun.B_BGA_SentryGun_C.ReceiveTick");

	AB_BGA_SentryGun_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_SentryGun.B_BGA_SentryGun_C.GameplayCue.Abilities.Activation.Generic.SentryGun
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (Parm)

void AB_BGA_SentryGun_C::GameplayCue_Abilities_Activation_Generic_SentryGun(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_SentryGun.B_BGA_SentryGun_C.GameplayCue.Abilities.Activation.Generic.SentryGun");

	AB_BGA_SentryGun_C_GameplayCue_Abilities_Activation_Generic_SentryGun_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_SentryGun.B_BGA_SentryGun_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (Parm)

void AB_BGA_SentryGun_C::OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_SentryGun.B_BGA_SentryGun_C.OnDeathPlayEffects");

	AB_BGA_SentryGun_C_OnDeathPlayEffects_Params params;
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


// Function B_BGA_SentryGun.B_BGA_SentryGun_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (Parm)

void AB_BGA_SentryGun_C::OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_SentryGun.B_BGA_SentryGun_C.OnDeathServer");

	AB_BGA_SentryGun_C_OnDeathServer_Params params;
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


// Function B_BGA_SentryGun.B_BGA_SentryGun_C.BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_271_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_BGA_SentryGun_C::BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_271_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_SentryGun.B_BGA_SentryGun_C.BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_271_ComponentBeginOverlapSignature__DelegateSignature");

	AB_BGA_SentryGun_C_BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_271_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_SentryGun.B_BGA_SentryGun_C.BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_275_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AB_BGA_SentryGun_C::BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_275_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_SentryGun.B_BGA_SentryGun_C.BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_275_ComponentEndOverlapSignature__DelegateSignature");

	AB_BGA_SentryGun_C_BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_275_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_SentryGun.B_BGA_SentryGun_C.OnBuildingActorInitialized
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortBuildingInitializationReason>* InitializationReason           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFortBuildingPersistentState>* BuildingPersistentState        (Parm, ZeroConstructor, IsPlainOldData)

void AB_BGA_SentryGun_C::OnBuildingActorInitialized(TEnumAsByte<EFortBuildingInitializationReason>* InitializationReason, TEnumAsByte<EFortBuildingPersistentState>* BuildingPersistentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_SentryGun.B_BGA_SentryGun_C.OnBuildingActorInitialized");

	AB_BGA_SentryGun_C_OnBuildingActorInitialized_Params params;
	params.InitializationReason = InitializationReason;
	params.BuildingPersistentState = BuildingPersistentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_SentryGun.B_BGA_SentryGun_C.ExecuteUbergraph_B_BGA_SentryGun
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AB_BGA_SentryGun_C::ExecuteUbergraph_B_BGA_SentryGun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_SentryGun.B_BGA_SentryGun_C.ExecuteUbergraph_B_BGA_SentryGun");

	AB_BGA_SentryGun_C_ExecuteUbergraph_B_BGA_SentryGun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
