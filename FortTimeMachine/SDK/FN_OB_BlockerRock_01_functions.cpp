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

// Function OB_BlockerRock_01.OB_BlockerRock_01_C.OnRep_Highlight
// (BlueprintCallable, BlueprintEvent)

void AOB_BlockerRock_01_C::OnRep_Highlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_BlockerRock_01.OB_BlockerRock_01_C.OnRep_Highlight");

	AOB_BlockerRock_01_C_OnRep_Highlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_BlockerRock_01.OB_BlockerRock_01_C.OnRep_MiniMapIconVisible
// (BlueprintCallable, BlueprintEvent)

void AOB_BlockerRock_01_C::OnRep_MiniMapIconVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_BlockerRock_01.OB_BlockerRock_01_C.OnRep_MiniMapIconVisible");

	AOB_BlockerRock_01_C_OnRep_MiniMapIconVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_BlockerRock_01.OB_BlockerRock_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOB_BlockerRock_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_BlockerRock_01.OB_BlockerRock_01_C.UserConstructionScript");

	AOB_BlockerRock_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_BlockerRock_01.OB_BlockerRock_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AOB_BlockerRock_01_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_BlockerRock_01.OB_BlockerRock_01_C.ReceiveBeginPlay");

	AOB_BlockerRock_01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_BlockerRock_01.OB_BlockerRock_01_C.Died
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (Parm, ZeroConstructor, IsPlainOldData)

void AOB_BlockerRock_01_C::Died(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_BlockerRock_01.OB_BlockerRock_01_C.Died");

	AOB_BlockerRock_01_C_Died_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_BlockerRock_01.OB_BlockerRock_01_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (Parm)

void AOB_BlockerRock_01_C::OnDamageServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_BlockerRock_01.OB_BlockerRock_01_C.OnDamageServer");

	AOB_BlockerRock_01_C_OnDamageServer_Params params;
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


// Function OB_BlockerRock_01.OB_BlockerRock_01_C.hint
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AOB_BlockerRock_01_C::hint()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_BlockerRock_01.OB_BlockerRock_01_C.hint");

	AOB_BlockerRock_01_C_hint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_BlockerRock_01.OB_BlockerRock_01_C.DisableEmitter
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AOB_BlockerRock_01_C::DisableEmitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_BlockerRock_01.OB_BlockerRock_01_C.DisableEmitter");

	AOB_BlockerRock_01_C_DisableEmitter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_BlockerRock_01.OB_BlockerRock_01_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (Parm)

void AOB_BlockerRock_01_C::OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_BlockerRock_01.OB_BlockerRock_01_C.OnDeathServer");

	AOB_BlockerRock_01_C_OnDeathServer_Params params;
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


// Function OB_BlockerRock_01.OB_BlockerRock_01_C.BndEvt__playerinsideshape_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AOB_BlockerRock_01_C::BndEvt__playerinsideshape_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_BlockerRock_01.OB_BlockerRock_01_C.BndEvt__playerinsideshape_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AOB_BlockerRock_01_C_BndEvt__playerinsideshape_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function OB_BlockerRock_01.OB_BlockerRock_01_C.BndEvt__playerinsideshape_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AOB_BlockerRock_01_C::BndEvt__playerinsideshape_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_BlockerRock_01.OB_BlockerRock_01_C.BndEvt__playerinsideshape_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");

	AOB_BlockerRock_01_C_BndEvt__playerinsideshape_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_BlockerRock_01.OB_BlockerRock_01_C.HandleMissionEvent_OBJ_21_Complete
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AOB_BlockerRock_01_C::HandleMissionEvent_OBJ_21_Complete(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_BlockerRock_01.OB_BlockerRock_01_C.HandleMissionEvent_OBJ_21_Complete");

	AOB_BlockerRock_01_C_HandleMissionEvent_OBJ_21_Complete_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_BlockerRock_01.OB_BlockerRock_01_C.AnalyticsEvent
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AOB_BlockerRock_01_C::AnalyticsEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_BlockerRock_01.OB_BlockerRock_01_C.AnalyticsEvent");

	AOB_BlockerRock_01_C_AnalyticsEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_BlockerRock_01.OB_BlockerRock_01_C.ExecuteUbergraph_OB_BlockerRock_01
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AOB_BlockerRock_01_C::ExecuteUbergraph_OB_BlockerRock_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_BlockerRock_01.OB_BlockerRock_01_C.ExecuteUbergraph_OB_BlockerRock_01");

	AOB_BlockerRock_01_C_ExecuteUbergraph_OB_BlockerRock_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
