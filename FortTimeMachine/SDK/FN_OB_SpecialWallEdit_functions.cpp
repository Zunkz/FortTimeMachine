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

// Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.OnRep_EditingEffects
// (BlueprintCallable, BlueprintEvent)

void AOB_SpecialWallEdit_C::OnRep_EditingEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.OnRep_EditingEffects");

	AOB_SpecialWallEdit_C_OnRep_EditingEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.OnRep_DisableHint
// (BlueprintCallable, BlueprintEvent)

void AOB_SpecialWallEdit_C::OnRep_DisableHint()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.OnRep_DisableHint");

	AOB_SpecialWallEdit_C_OnRep_DisableHint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.OnRep_ArrowHintActive
// (BlueprintCallable, BlueprintEvent)

void AOB_SpecialWallEdit_C::OnRep_ArrowHintActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.OnRep_ArrowHintActive");

	AOB_SpecialWallEdit_C_OnRep_ArrowHintActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.OnRep_isDestroyed
// (BlueprintCallable, BlueprintEvent)

void AOB_SpecialWallEdit_C::OnRep_isDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.OnRep_isDestroyed");

	AOB_SpecialWallEdit_C_OnRep_isDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOB_SpecialWallEdit_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.UserConstructionScript");

	AOB_SpecialWallEdit_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.OnCanceled_1A19862C47F5B5512EBB1BB0BD6E4C8D
// (BlueprintCallable, BlueprintEvent)

void AOB_SpecialWallEdit_C::OnCanceled_1A19862C47F5B5512EBB1BB0BD6E4C8D()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.OnCanceled_1A19862C47F5B5512EBB1BB0BD6E4C8D");

	AOB_SpecialWallEdit_C_OnCanceled_1A19862C47F5B5512EBB1BB0BD6E4C8D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0BD6E4C8D
// (BlueprintCallable, BlueprintEvent)

void AOB_SpecialWallEdit_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB0BD6E4C8D()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0BD6E4C8D");

	AOB_SpecialWallEdit_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0BD6E4C8D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (Parm)

void AOB_SpecialWallEdit_C::OnDamageServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.OnDamageServer");

	AOB_SpecialWallEdit_C_OnDamageServer_Params params;
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


// Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AOB_SpecialWallEdit_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.ReceiveDestroyed");

	AOB_SpecialWallEdit_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.HandleMissionEvent_PlayerAtControlRoom
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

void AOB_SpecialWallEdit_C::HandleMissionEvent_PlayerAtControlRoom(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.HandleMissionEvent_PlayerAtControlRoom");

	AOB_SpecialWallEdit_C_HandleMissionEvent_PlayerAtControlRoom_Params params;
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


// Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.BndEvt__Box_K2Node_ComponentBoundEvent_426_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AOB_SpecialWallEdit_C::BndEvt__Box_K2Node_ComponentBoundEvent_426_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.BndEvt__Box_K2Node_ComponentBoundEvent_426_ComponentBeginOverlapSignature__DelegateSignature");

	AOB_SpecialWallEdit_C_BndEvt__Box_K2Node_ComponentBoundEvent_426_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.HandleMissionEvent_ToggledEditMode
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

void AOB_SpecialWallEdit_C::HandleMissionEvent_ToggledEditMode(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.HandleMissionEvent_ToggledEditMode");

	AOB_SpecialWallEdit_C_HandleMissionEvent_ToggledEditMode_Params params;
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


// Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.HandleMissionEvent_BuildingEdited
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

void AOB_SpecialWallEdit_C::HandleMissionEvent_BuildingEdited(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.HandleMissionEvent_BuildingEdited");

	AOB_SpecialWallEdit_C_HandleMissionEvent_BuildingEdited_Params params;
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


// Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.BndEvt__Box1_K2Node_ComponentBoundEvent_10_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AOB_SpecialWallEdit_C::BndEvt__Box1_K2Node_ComponentBoundEvent_10_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.BndEvt__Box1_K2Node_ComponentBoundEvent_10_ComponentBeginOverlapSignature__DelegateSignature");

	AOB_SpecialWallEdit_C_BndEvt__Box1_K2Node_ComponentBoundEvent_10_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (Parm)

void AOB_SpecialWallEdit_C::OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.OnDeathServer");

	AOB_SpecialWallEdit_C_OnDeathServer_Params params;
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


// Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.ExecuteUbergraph_OB_SpecialWallEdit
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AOB_SpecialWallEdit_C::ExecuteUbergraph_OB_SpecialWallEdit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_SpecialWallEdit.OB_SpecialWallEdit_C.ExecuteUbergraph_OB_SpecialWallEdit");

	AOB_SpecialWallEdit_C_ExecuteUbergraph_OB_SpecialWallEdit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
