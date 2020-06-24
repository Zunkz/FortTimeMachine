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

// Function BP_MinimapHighlight_Cars.BP_MinimapHighlight_Cars_C.OnRep_Highlights
// (BlueprintCallable, BlueprintEvent)

void ABP_MinimapHighlight_Cars_C::OnRep_Highlights()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MinimapHighlight_Cars.BP_MinimapHighlight_Cars_C.OnRep_Highlights");

	ABP_MinimapHighlight_Cars_C_OnRep_Highlights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MinimapHighlight_Cars.BP_MinimapHighlight_Cars_C.OnRep_DestroyExtraHints
// (BlueprintCallable, BlueprintEvent)

void ABP_MinimapHighlight_Cars_C::OnRep_DestroyExtraHints()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MinimapHighlight_Cars.BP_MinimapHighlight_Cars_C.OnRep_DestroyExtraHints");

	ABP_MinimapHighlight_Cars_C_OnRep_DestroyExtraHints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MinimapHighlight_Cars.BP_MinimapHighlight_Cars_C.OnRep_ShowExtraHints
// (BlueprintCallable, BlueprintEvent)

void ABP_MinimapHighlight_Cars_C::OnRep_ShowExtraHints()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MinimapHighlight_Cars.BP_MinimapHighlight_Cars_C.OnRep_ShowExtraHints");

	ABP_MinimapHighlight_Cars_C_OnRep_ShowExtraHints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MinimapHighlight_Cars.BP_MinimapHighlight_Cars_C.OnRep_Minimap
// (BlueprintCallable, BlueprintEvent)

void ABP_MinimapHighlight_Cars_C::OnRep_Minimap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MinimapHighlight_Cars.BP_MinimapHighlight_Cars_C.OnRep_Minimap");

	ABP_MinimapHighlight_Cars_C_OnRep_Minimap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MinimapHighlight_Cars.BP_MinimapHighlight_Cars_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MinimapHighlight_Cars_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MinimapHighlight_Cars.BP_MinimapHighlight_Cars_C.UserConstructionScript");

	ABP_MinimapHighlight_Cars_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MinimapHighlight_Cars.BP_MinimapHighlight_Cars_C.Check
// (BlueprintCallable, BlueprintEvent)

void ABP_MinimapHighlight_Cars_C::Check()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MinimapHighlight_Cars.BP_MinimapHighlight_Cars_C.Check");

	ABP_MinimapHighlight_Cars_C_Check_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MinimapHighlight_Cars.BP_MinimapHighlight_Cars_C.SetMinimapOn
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_MinimapHighlight_Cars_C::SetMinimapOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MinimapHighlight_Cars.BP_MinimapHighlight_Cars_C.SetMinimapOn");

	ABP_MinimapHighlight_Cars_C_SetMinimapOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MinimapHighlight_Cars.BP_MinimapHighlight_Cars_C.SetMinimapOff
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_MinimapHighlight_Cars_C::SetMinimapOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MinimapHighlight_Cars.BP_MinimapHighlight_Cars_C.SetMinimapOff");

	ABP_MinimapHighlight_Cars_C_SetMinimapOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MinimapHighlight_Cars.BP_MinimapHighlight_Cars_C.HandleMissionEvent_OBJ_24_Activate
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

void ABP_MinimapHighlight_Cars_C::HandleMissionEvent_OBJ_24_Activate(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MinimapHighlight_Cars.BP_MinimapHighlight_Cars_C.HandleMissionEvent_OBJ_24_Activate");

	ABP_MinimapHighlight_Cars_C_HandleMissionEvent_OBJ_24_Activate_Params params;
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


// Function BP_MinimapHighlight_Cars.BP_MinimapHighlight_Cars_C.HandleMissionEvent_OBJ_3_Complete
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

void ABP_MinimapHighlight_Cars_C::HandleMissionEvent_OBJ_3_Complete(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MinimapHighlight_Cars.BP_MinimapHighlight_Cars_C.HandleMissionEvent_OBJ_3_Complete");

	ABP_MinimapHighlight_Cars_C_HandleMissionEvent_OBJ_3_Complete_Params params;
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


// Function BP_MinimapHighlight_Cars.BP_MinimapHighlight_Cars_C.Input
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*          ActorRef                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MinimapHighlight_Cars_C::Input(class ABuildingActor* ActorRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MinimapHighlight_Cars.BP_MinimapHighlight_Cars_C.Input");

	ABP_MinimapHighlight_Cars_C_Input_Params params;
	params.ActorRef = ActorRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MinimapHighlight_Cars.BP_MinimapHighlight_Cars_C.Died
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

void ABP_MinimapHighlight_Cars_C::Died(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MinimapHighlight_Cars.BP_MinimapHighlight_Cars_C.Died");

	ABP_MinimapHighlight_Cars_C_Died_Params params;
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


// Function BP_MinimapHighlight_Cars.BP_MinimapHighlight_Cars_C.StartHints
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_MinimapHighlight_Cars_C::StartHints()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MinimapHighlight_Cars.BP_MinimapHighlight_Cars_C.StartHints");

	ABP_MinimapHighlight_Cars_C_StartHints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MinimapHighlight_Cars.BP_MinimapHighlight_Cars_C.timeup
// (BlueprintCallable, BlueprintEvent)

void ABP_MinimapHighlight_Cars_C::timeup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MinimapHighlight_Cars.BP_MinimapHighlight_Cars_C.timeup");

	ABP_MinimapHighlight_Cars_C_timeup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MinimapHighlight_Cars.BP_MinimapHighlight_Cars_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (Parm)

void ABP_MinimapHighlight_Cars_C::OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MinimapHighlight_Cars.BP_MinimapHighlight_Cars_C.OnDeathServer");

	ABP_MinimapHighlight_Cars_C_OnDeathServer_Params params;
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


// Function BP_MinimapHighlight_Cars.BP_MinimapHighlight_Cars_C.nukeeffects
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_MinimapHighlight_Cars_C::nukeeffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MinimapHighlight_Cars.BP_MinimapHighlight_Cars_C.nukeeffects");

	ABP_MinimapHighlight_Cars_C_nukeeffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MinimapHighlight_Cars.BP_MinimapHighlight_Cars_C.finalreminder
// (BlueprintCallable, BlueprintEvent)

void ABP_MinimapHighlight_Cars_C::finalreminder()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MinimapHighlight_Cars.BP_MinimapHighlight_Cars_C.finalreminder");

	ABP_MinimapHighlight_Cars_C_finalreminder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MinimapHighlight_Cars.BP_MinimapHighlight_Cars_C.ExecuteUbergraph_BP_MinimapHighlight_Cars
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MinimapHighlight_Cars_C::ExecuteUbergraph_BP_MinimapHighlight_Cars(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MinimapHighlight_Cars.BP_MinimapHighlight_Cars_C.ExecuteUbergraph_BP_MinimapHighlight_Cars");

	ABP_MinimapHighlight_Cars_C_ExecuteUbergraph_BP_MinimapHighlight_Cars_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
